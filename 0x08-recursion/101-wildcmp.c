#include "main.h"
/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
 * @s1: first pointer to char variable
 * @s2: second pointer to char variable
 * Return: 1, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
