#include "main.h"

/**
 * rev_string - Reverses a string
 * @s : The string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i])
		i++;

	while (i > j)
	{
		temp = s[--i];
		s[i] = s[j];
		s[j++] = temp;
	}
}
