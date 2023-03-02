#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @w: pointer to string
 * Return: *w
 */
char *rot13(char *w)
{
	int m, n;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; w[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (w[m] == data1[n])
			{
				w[m] = datarot[n];
				break;
			}
		}
	}
	return (w);
}
