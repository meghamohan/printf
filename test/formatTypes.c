#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

void intType(va_list list1, char *buffer, int *index)
{
	int number, i = 0, j = 0, temp, length = 0;
	int remainder = 0;
	char str[50];

	number = va_arg(list1, int);
	temp = number;
	while (temp != 0)
	{
		length++;
		temp /= 10;
	}
	for (i = 0; i < length; i++)
	{
		remainder = number % 10;
		number = number / 10;
		str[length - (i + 1)] = remainder + '0';
	}
	str[length] = '\0';
	
	for (i = *index, j = 0 ; j < length ; i++, j++, *index += 1)
	{
		if (*index == 1024)
		{
			printBuffer(buffer, index);
			resetBuffer(buffer);
			*index = 0;
		}
		buffer[*index] = str[j];
	}	
}
void charType(va_list list1, char *buffer, int *index)
{
        char c;

	c = va_arg(list1, int);
	if (*index == 1024)
	{
		printBuffer(buffer, index);
		resetBuffer(buffer);
		*index = 0;
	}
	buffer[*index] = c;
	*index += 1;
}
