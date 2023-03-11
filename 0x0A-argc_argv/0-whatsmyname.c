#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* ignore argc */

	printf("%s\n", *argv);

	return (0);
}
