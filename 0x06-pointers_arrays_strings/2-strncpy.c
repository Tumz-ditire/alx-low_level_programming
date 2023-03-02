#include "main.h"

/**
 * _strncpy - function that copies a string.
 * Function should work exactly like strncpy.
 * @dest: input variable
 * @src: input variable
 * @n: input variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}

	return (dest);
}
