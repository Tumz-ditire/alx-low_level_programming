#included "main.h"

/**
 * print_all_numbers - prints numbers from 0 to 9.
 * Return: void
 */
void print_all_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
