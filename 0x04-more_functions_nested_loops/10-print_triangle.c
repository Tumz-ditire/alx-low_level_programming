#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: the number of lines.
 * Return: void
 */
void print_triangle(int size)
{
	int i, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (l = i; l < size; l++)
			{
				_putchar(' ');
			}

			for (l = 1; l <= i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
