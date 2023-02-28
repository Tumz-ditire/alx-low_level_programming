#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int y = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for (; y < w; y++)
	{
		dest[y] = src[y];
	}
	dest[w] = '\0';
	return (dest);
}
