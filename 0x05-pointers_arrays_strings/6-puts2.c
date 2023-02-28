#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character.
 * @str: input variable
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *h = str;
	int r;

	while (*h != '\0')
	{
		h++;
		longi++;
	}
	j = longi - 1;
	for (r = 0; r <= j; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}
	}
	_putchar('\n');
}
