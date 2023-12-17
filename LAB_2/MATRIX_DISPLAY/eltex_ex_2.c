#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <limits.h>
#define MAX 100
#define PRINT_ERROR(str) do { fprintf(stderr, "%s", str); if (errno) fprintf(stderr, "%s", strerror(errno)); puts(""); exit(EXIT_FAILURE); } while(0);
/*
ex.1: display the matrix N x N
1 2 3
4 5 6
7 8 9
ex.2: display the array in reversed order:
1 2 3 4 5 > 5 4 3 2 1
ex. 3: fill the the upper triangle with 1s, the lower with 0s
0 0 1
0 1 1
1 1 1
ex.4: fill the matrix with the numbers from 1 to N^2 that looks like a snake
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
*/

void fill_matrix(int elements_total, int rows, int *mtrx)
{
    int counter = 0;
    for (int i = 0; i < elements_total; i++)
        mtrx[i] = ++counter;
}

void display_matrix(int elements_total, int rows, int *mtrx)
{
    for (int i = 0; i < elements_total; i++) {
        printf("%d ", mtrx[i]);
        if (((i + 1) % rows) == 0)
            puts("");
    }
}

int main(void)
{
    int arr[MAX][MAX] = {0};
    int rows, columns, counter, ret;

    columns = rows = counter = ret = 0;

    printf("insert the number of columns and rows (e.g \"5 5\"): ");

    ret = scanf("%32d %32d", &columns, &rows);
    if (ret == 0 || ret == 1) PRINT_ERROR("failed to read columns and rows!")
    else if (ret == EOF) PRINT_ERROR("received EOF!")
    if ((columns > MAX || rows > MAX) || (columns <= 1 || rows <= 1)) PRINT_ERROR("you can't print more 100 rows or 100 columns or equal/less than 1!")

    printf("total number of elements in matrix = %d\n", rows * columns);

    fill_matrix(rows * columns, rows, *arr);

    return EXIT_SUCCESS;
}

