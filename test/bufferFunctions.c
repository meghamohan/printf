#include "holberton.h"
#include <stdio.h>

/**
  * printBuffer - function that prints a buffer
  * @buffer: buffer pointer
  * @index: index pointer
  */
void printBuffer(char *buffer, int *index)
{
	write(1, buffer, *index);
}


/**
  * resetBuffer - function that resets a buffer
  * @buffer: buffer pointer
  */
void reset_buffer(char *buffer)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	buffer[i] = '\0';
}
