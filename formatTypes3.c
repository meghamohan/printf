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
	char *temp;
	int i, j;
	char rot1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char rot2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	temp = va_arg(list1, char *);
	if (temp == NULL)
		return;
	for (i = 0; temp[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (temp[i] == rot2[j])
			{
				buffer[*index] = rot1[j];
				*index += 1;
				break;
			}
		}
		if (j == 52)
		{	
			buffer[*index] = temp[i];
			*index += 1;
		}
	}
}


