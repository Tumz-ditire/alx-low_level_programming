#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /* check if str there are digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the entire array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}
		else /*condition if one of the numbers contains symbols that are not digits*/
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum);

	return (0);
}
