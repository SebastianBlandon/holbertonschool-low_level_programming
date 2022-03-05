#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * count_cents - count the coins
 * @amount: int variable input
 * @cents: int variable input
 * Return: cents int output
 */
int count_cents(int amount, int cents)
{
	if (!amount)
		return cents;
	if (!(amount % 25))
	{
		amount -= 25;
		cents++;
	}
	else if (!(amount % 10))
	{
		amount -= 10;
		cents++;
	}
	else if (!(amount % 5))
	{
		amount -= 5;
		cents++;
	}
	else if (!(amount % 2))
	{
		amount -= 2;
		cents++;
	}
	else if (!(amount % 1))
	{
		amount -= 1;
		cents++;
	}
	return count_cents(amount, cents);
}
/**
 * main - prints the minimum number of coins to make change
 *  for an amount of money.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc == 2)
	{
		cents = count_cents(atoi(argv[argc - 1]), 0);
		printf("%i\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
