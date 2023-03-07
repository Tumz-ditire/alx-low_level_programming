#include "main.h"

/**
 * _strstr - function that locates a substring.
 * Finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: input variable
 * @needle: input variable
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
