#include "main.h"

/**
 * _strcat - function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: first variable
 * @src: second variable
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';

	return (dest);
}
