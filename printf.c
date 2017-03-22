#include "holberton.h"
/**
 * _printf - my own version of printf function
 * @format: char that designates format.
 * Return: length of chars that were printed
 **/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, temp = 0, *index; char buffer[1024]; va_list list1;
	ftype ftype1[] = {
		{'c', charType}, {'d', intType}, {'i', intType},
		{'s', stringType}, {'u', unintType}, {'o', octType},
		{'b', biType}, {'\0', NULL} };
	index = &temp;
	va_start(list1, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			if (*index == 1023)
			{
				printBuffer(buffer, index);
				resetBuffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
			i++; *index += 1;
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (ftype1[j].t != '\0')
			{
				if (format[i] == ftype1[j].t)
				{
					ftype1[j].f(list1, buffer, index);
					break;
				}
				j++;
			}
		}
		i++;
	}
	buffer[*index] = '\0'; printBuffer(buffer, index); return (*index);
}
