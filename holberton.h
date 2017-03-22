#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
char *rstr(char *s);
void intType(va_list list1, char *buffer, int *index);
void charType(va_list list1, char *buffer, int *index);
void stringType(va_list list1, char *buffer, int *index);
void octType(va_list list1, char *buffer, int *index);
void biType(va_list list1, char *buffer, int *index);
int absolute(int num);
void percentType(va_list list1, char *buffer, int *index);
void rot13Type(va_list list1, char *buffer, int *index);
void unintType(va_list list1, char *buffer, int *index);
void printBuffer(char *buffer, int *index);
void resetBuffer(char buffer[]);
int findIntLength(int n);
/**
* struct formatType - structure to find func.
* @t: type
* @f: function
*/
typedef struct formatType
{
	char t;
	void (*f)();
} ftype;

#endif /* HOLBERTON_H */
