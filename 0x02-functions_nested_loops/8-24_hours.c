#include "main.h"

/**
 * jack_bauer - prints every minute of day of Jack Bauer, from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + 0);
			_putchar((h % 10) + 0);
			_putchar(':');
			_putchar((m / 10) + 0);
			_putchar((m % 10) + 0);
			_putchar('\n');
		m++;
		}
	h++;
	}
}
