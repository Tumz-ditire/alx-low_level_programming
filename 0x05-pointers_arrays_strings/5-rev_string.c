#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	char last_char;
	int count = 0, q = 0;

	while (*s)
	{
		s++;
		count++;
	}
	for (q = 0; q < count; q++)
	{
		s--;
	}

	for (q = 0; q < (count / 2); q++)
	{
		int last = count - 1;

		last_char = s[last - q];
		s[last - q] = s[q];
		s[q] = last_char;
	}
}
