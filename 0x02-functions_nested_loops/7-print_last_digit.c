#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @m: parameter to be checked
 * Return: Always j (Success)
 */
int print_last_digit(int m)
{
	int last_num = m % 10;

	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
