#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	unsigned long n, isprime;

	n = 612852475143;
	for (isprime = 2; isprime <= n; isprime++)
	{
		if (n % isprime == 0)
		{
			n /= isprime;
			isprime--;
		}
	}
	printf("%ld\n", isprime);
	return (0);
}
