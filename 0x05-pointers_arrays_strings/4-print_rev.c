#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: character input
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int g;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (g = longi; g > 0; g--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
