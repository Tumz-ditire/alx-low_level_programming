#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @m: parameter to be checked
 * Return: Always j (Success)
 */
int print_last_digit(int m)
{
	int j;

	j = m % 10;
	if (m < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
