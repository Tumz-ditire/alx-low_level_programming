#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square.
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
