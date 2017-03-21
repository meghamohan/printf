#include "holberton.h"
/**
 * intType - helper function to print an int or decimal.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void intType(va_list list1, char *buffer, int *index)
{
	int number, i = 0, j = 0, temp, length = 0, remainder = 0, flag = 0;
	char str[50];

	number = temp = va_arg(list1, int);
	while (temp != 0)
	{
		length++;
		temp /= 10;
	}
	if (number < 0)
	{
		flag = 1;
		str[i] = '-';
		i++; length++;
		number = number  * -1;
	}
	for (; i < length; i++)
	{
		remainder = number % 10;
		number = number / 10;
		if (flag == 1)
			str[length - i] = remainder + '0';
		else
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
/**
 * charType - helper function to print a char.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
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
/**
 * stringType - helper function to print a string.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
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
/**
 * unintType - helper function to print unsigned int.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void unintType(va_list list1, char *buffer, int *index)
{
	unsigned int i, j, k, temp, length;
	char *str;

	k = va_arg(list1, unsigned int);
	temp = k;
	for (i = 0; temp > 0; i++)
		temp = temp / 10;

	length = i;
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		exit(0);
	for (j = 0; j < i; j++)
	{
		str[j] = k % 10 + '0';
		k = k / 10;
	}
	str[j] = '\0';
	str = rstr(str);
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
	free(str);
}
