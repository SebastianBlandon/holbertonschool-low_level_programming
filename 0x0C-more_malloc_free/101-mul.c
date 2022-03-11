#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_error - print string Error.
 * Return: void function
 */
void print_error(void)
{
	_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r');
	_putchar('\n');
}
/**
 * check_if_digit - check the array argv are number.
 * @argc: int variable input, size argv
 * @argv: pointer to char input
 * Return: void function
 */
void check_if_digit(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				print_error();
				exit(98);
			}
	}
}
/**
 * check_if_one - check the argv number.
 * @argv: pointer to char input
 * Return: void function
 */
void check_if_one(char *argv[])
{
	int i;

	if (argv[1][0] == '1')
	{
		for (i = 0; argv[2][i]; i++)
			_putchar(argv[2][i]);
		_putchar(10);
		exit(0);
	}

	if (argv[2][0] == '1')
	{
		for (i = 0; argv[1][i]; i++)
			_putchar(argv[1][i]);
		_putchar(10);
		exit(0);
	}
}
/**
 * main - multiplies two numbers.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, mul = 1, multiple_10 = 1;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}

	check_if_digit(argc, argv);
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		_putchar('0');
		_putchar(10);
		return (0);
	}

	check_if_one(argv);
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);

	while (multiple_10 < mul)
		multiple_10 *= 10;

	multiple_10 /= 10;
	while (multiple_10 != 1)
	{
		_putchar(mul / multiple_10 + 48);
		mul -= (multiple_10 * (mul / multiple_10));
		multiple_10 /= 10;
	}
	_putchar(mul % 10 + 48);
	_putchar(10);

	return (0);
}
