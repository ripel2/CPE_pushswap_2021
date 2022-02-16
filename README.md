
# Pushswap

Sort a list quickly with limited operations

## About this project

The goal of this project is to sort a list of numbers using
some specific operations.

## How to use

First compile with the Makefile
```sh
make
```

Then launch the program by typing
```sh
./push_swap 1 3 2 4 1 3 4 5
```
(you can put any number you want that fits in a int)

The program will print the operations needed to sort the list.
If the list is already sorted, a '\n' will be printed.

## Bonus features
Compile with the bonus Makefile
```sh
cd bonus && make
```

Then launch the program with
```sh
./push_swap_b 1 3 2 4 1 3 4 5
```

The program will behave exactly the same as the normal pushswap
if no flags are provided.

### Flags
- `-v` prints the lists at each operation
- `-c` counts the number of operations and prints it
- `-t` prints the time needed to execute
- `-r` sorts in reverse order
- `-s` processes all operations silently. overrides verbose flag

flags must be put before any numbers