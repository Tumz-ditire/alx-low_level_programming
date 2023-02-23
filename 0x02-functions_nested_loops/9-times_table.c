#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, m, r;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			r = m * i;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
