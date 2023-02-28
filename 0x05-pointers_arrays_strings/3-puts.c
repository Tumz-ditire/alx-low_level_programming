#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string variable
 * Return: length of the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
	}
}
