#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
