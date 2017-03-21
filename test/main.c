#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
//    unsigned int ui;
//    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
//   ui = (unsigned int)INT_MAX + 1024;
//    addr = (void *)0x7ffe637541f0;
	_printf("checking for  %d\n", 3533);
	_printf("checking char %c,%c,%c\n",'a','b','c') ;
  _printf("Length:[%d, %d]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
//    _printf("Unsigned:[%u]\n", ui);
//    printf("Unsigned:[%u]\n", ui);
//    _printf("Unsigned octal:[%o]\n", ui);
//    printf("Unsigned octal:[%o]\n", ui);
//    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c],[%c]\n", 'H', 'M');
    printf("Character:[%c],[%c]\n", 'H', 'M');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
//    _printf("Address:[%p]\n", addr);
//    printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	 _printf("checking rot13:[%R]\n","AaoOpP");
    return (0);
}
