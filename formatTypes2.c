#include "holberton.h"
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
/**
 * octType - helper function to print unsigned oct.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void octType(va_list list1, char *buffer, int *index)
{
	unsigned int i, j, k;
	char *str;

	k = va_arg(list1, unsigned int);

	str = malloc(12 * sizeof(char));
	if (str == NULL)
		exit(0);
	for (j = 0; k != 0; j++)
	{
		str[j] = k % 8 + '0';
		k = k / 8;
	}
	str[j] = '\0';
	str = rstr(str);
	for (i = *index, j = 0 ; j < 12 ; i++, j++, *index += 1)
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
/**
 * biType - helper function to print unsigned oct.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void biType(va_list list1, char *buffer, int *index)
{
	unsigned int i, j, k, length;
	char *str;

	k = va_arg(list1, unsigned int);
	length = 0;
	str = malloc(32 * sizeof(char) + 1);
	if (str == NULL)
		exit(0);
	for (j = 0; k != 0; j++)
	{
		str[j] = k % 2 + '0';
		k = k / 2;
		length++;
	}
	str[j] = '\0';
	str = rstr(str);
	for (i = *index, j = 0 ; j < length  ; i++, j++, *index += 1)
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
