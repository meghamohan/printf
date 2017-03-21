#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

void intType(va_list list1, char *buffer, int *index)
{
	int number, i = 0, j = 0, temp, length = 0, remainder = 0;
	char str[50];

	number = temp = va_arg(list1, int);
	while (temp != 0)
	{
		length++;
		temp /= 10;
	}
	if (number < 0)
	{
		str[i] = '-';
		i++; length++;
		number = number  * -1;
	}
	for (; i < length; i++)
	{
		remainder = number % 10;
		number = number / 10;
		str[length - i] = remainder + '0';
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

void stringType(va_list list1, char *buffer, int *index)
{
	int i, j;
	char *s;

	s = va_arg(list1, char*);
	for (i = *index, j = 0; s[j] != '\0';  *index += 1, i++, j++)
	{
		if (*index == 1024)
                {
                        printBuffer(buffer, index);
                        resetBuffer(buffer);
			*index = 0;
                }
		buffer[*index] = s[j];
	}
}

void percentType(va_list list1, char *buffer, int *index)
{
	list1 = list1;
	buffer[*index] = '%';
	*index += 1;
}

void rot13Type(va_list list1, char *buffer, int *index)
{
	int i = 0, j = 0;
	char rot1[] = "abcdefghijklmABCDEFGHIJKLM";
	char rot2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	char *temp;

	temp = va_arg(list1, char*);
        for (i = *index, j = 0; temp[j] != '\0';  *index += 1, i++, j++)
        {
                if (*index == 1024)
                {
                        printBuffer(buffer, index);
                        resetBuffer(buffer);
                        *index = 0;
                }
		if (temp[i] == rot1[j])
		{
			buffer[*index] = rot2[j];
		}
		else if (temp[i] == rot2[j])
		{
			buffer[*index] = rot1[j];
		}
        }
}
