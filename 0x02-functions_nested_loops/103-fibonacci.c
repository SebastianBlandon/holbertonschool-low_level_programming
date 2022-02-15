#include <stdio.h>
/**
 * main - the function print fibonacci sum < 4,000,000
 * Return: void function
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum = 0, fibo = 0;

	while (sum <= 4000000)
	{
		fibo = a + b;
		if (fibo % 2 == 0)
			sum += fibo;
		a = b;
		b = fibo;
	}
	printf("%lu\n", sum);
	return (0);
}

