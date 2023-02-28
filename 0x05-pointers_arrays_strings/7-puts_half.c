#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * If odd, n = (length_of_the_string - 1) / 2.
 * @str: variable input
 * Return: half of input
 */
void puts_half(char *str)
{
	int count = 0;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	j = (count / 2);

	if ((count % 2) == 1)
		j = ((count + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
