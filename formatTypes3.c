#include "holberton.h"
/**
 * percentType - helper function to print percentage.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void percentType(va_list list1, char *buffer, int *index)
{
	list1 = list1;
	buffer[*index] = '%';
	*index += 1;
}
/**
 * rot13Type - helper function to print rot13encoded string.
 * @list1: string to be converted by funtion.
 * @buffer: buffer to store output
 * @index: current location in the buffer
 * Return: returns none, prints buffer.
 */
void rot13Type(va_list list1, char *buffer, int *index)
{
	int i = 0, j = 0;
	char rot1[] = "abcdefghijklmABCDEFGHIJKLM";
	char rot2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	char *temp;

	list1 = list1;
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

