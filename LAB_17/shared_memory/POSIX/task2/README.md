# Shared memory (POSIX)
## Задание 2:
### Написать программу-сервер и программу клиент.
### Программа-сервер создаёт разделяемый участок памяти, записывает '!' и ожидает пока значение не поменяется.
### Программа-клиента подключается к разделяемому участку памяти, и меняет значение, завершая работу сервера.
____

#### Сборка проекта:

'~$ make all'

#### Запуск сервера:

'~$ make shm_writer'

#### Запуск клиента:

'~$ make shm_reader':

#### Удаление проекта:

'~$ make clean'
____
