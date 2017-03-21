/**
 * rstr - reverses a string.
 * @s: string to be reversed.
 * Return: returns new string.
 */
char *rstr( char *s)
{
	int count, count2;
	char string;
	
	for (count = 0; s[count] != '\0'; count++)

	count--;
	for (count2 = 0; count2 <= count / 2; count2++)
	{
		string = s[count2];
		s[count2] = s[count - count2];
		s[count - count2] = string;
	}
	return (s);
}

