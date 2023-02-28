#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string to be converted
 * Return: integer that is converted from a string
 */
int _atoi(char *s)
{
	int a, d, c, len, g, num;

	a = 0;
	d = 0;
	c = 0;
	len = 0;
	g = 0;
	num = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && g == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (d % 2)
				num = -num;
			c = c * 10 + num;
			g = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			g = 0;
		}
		a++;
	}
	if (g == 0)
		return (0);
	return (c);
}
