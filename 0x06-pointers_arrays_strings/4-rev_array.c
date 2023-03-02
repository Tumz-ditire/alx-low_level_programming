#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * Where n is the number of elements of the array.
 * @a: array
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < n--; g++)
	{
		h = a[g];
		a[g] = a[n];
		a[n] = h;
	}
}
