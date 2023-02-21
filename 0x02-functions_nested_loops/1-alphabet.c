#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase using the function putchar twice.
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
