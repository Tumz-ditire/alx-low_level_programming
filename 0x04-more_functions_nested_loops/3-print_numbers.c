#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9; a new line.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
