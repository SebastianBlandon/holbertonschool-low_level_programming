#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
unsigned long int _strlen(int *s)
{
	unsigned long int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
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

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		while (multiple_10 < mul)
			multiple_10 *= 10;

		multiple_10 /= 10;
		while (multiple_10 != 1)
		{
			_putchar(mul/multiple_10 + 48);
			mul -= (multiple_10 * (mul/multiple_10));
			multiple_10 /= 10;
		}
		_putchar(mul%10 + 48);
		_putchar(10);
	}
	else
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r');
		_putchar('\n');
		exit (98);
	}
	return (0);
}
