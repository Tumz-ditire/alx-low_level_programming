#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * followed by a new line.
 * @n: print using this number
 */
void print_to_98(int n)
{
	int i, g;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
		for (g = n; g >= 98; g--)
		{
			if (g != 98)
				printf("%d, ", g);
			else if (g == 98)
				printf("%d\n", g);
		}
	}
}
