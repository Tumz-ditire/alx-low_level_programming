#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

void more_numbers(void)
{
	int i; 
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j <= 14; j++)
		{
			if (j / 10 > 0 )
			{
				_putchar((j / 10) + '0');
				_putchar(j % 10 + '0');
			}
		}	
	_putchar('\n');
	}
}
