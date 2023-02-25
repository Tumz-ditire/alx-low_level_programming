#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: the number of lines.
 * Return: void
 */
void print_triangle(int size)
{
	int i, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (l = 1; l <= i; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
