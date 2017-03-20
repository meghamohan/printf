#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
//int _putchar(char c);
//int _strlen(char *s);
//char *_strcpy(char *dest, char *src);
void intType(va_list list1, char *buffer, int *index);
void charType(va_list list1, char *buffer, int *index);
void printBuffer(char *buffer, int *index);
void resetBuffer(char buffer[]);
/**
* struct functionType
* @t: type
* @f: function
*/
typedef struct formatType
{
	char t;
	void (*f)();
} ftype;
#endif /* HOLBERTON_H */
