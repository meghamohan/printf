#Rewrite Printf
## Description
This project is about recreating our own version ,_printf, of the C library function printf. Printf formats data and converts it to a character string and outputs to `stdout`. 

##How To Use
```
$ git clone git@github.com:meghamohan/printf.git
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
Compile everything within the directory and use _printf in your code.

###Declaration
int _printf(const char *format, ...)

###Example
```
_printf("I am %s and I am %d years old", "holbertonschool", 2);
$ I am holbertonschool and I am 2 years old
```

###Format tags
format tags must follow the format of [flags][width][.precision][length]specifier

| **specifier** | **output**                            |
|---------------|---------------------------------------|
| c             | characters                            |
| s		| string of characters                  |
| i or d        | signed decimal int                    |
| u             | unsigned decimal int                  |
| o             | signed octal                          |
| x             | unsigned hexadecimal int              |
| X             | unsigned hexadecimal int (Upper Case) |
| b             | Binary                                |
| p             | pointer address                       |

###Project Members
Megha Mohan
Stuart Fosse
