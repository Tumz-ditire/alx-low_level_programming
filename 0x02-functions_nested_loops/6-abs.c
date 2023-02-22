#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: character to be computed
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		_abs(n);
		return (1);
	}
	else
	{
		return (0);
	}
}
