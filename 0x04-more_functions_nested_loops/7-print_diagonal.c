#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times diagonal line is printed.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (k = 0; k <= i; k++)
			{
				if (i == (n - 1))
				{
					break;
				}
				_putchar(' ');
			}
		}
	}
}
