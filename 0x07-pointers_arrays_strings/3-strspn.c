#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input variable
 * @accept: input variable
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (k);
			}
		}
		s++;
	}
	return (k);
}
