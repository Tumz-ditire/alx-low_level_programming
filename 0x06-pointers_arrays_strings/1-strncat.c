#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * use at most n bytes from src.
 * @dest: input variable
 * @src: input variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t;
	int x;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[t] = src[x];
		t++;
		x++;
	}
	dest[t] = '\0';
	return (dest);
}
