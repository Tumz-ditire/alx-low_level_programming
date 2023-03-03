#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int j, k;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[j] == s1[k])
			{
				n[j] = s2[k];
			}
		}
	}
	return (n);
}
