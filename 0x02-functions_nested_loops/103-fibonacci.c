#include <stdio.h>
/**
 * main - the function print fibonacci sum < 4,000,000
 * Return: void function
 */
int main(void)
{
	int i = 0;
	unsigned long a = 0, b = 1, sum = 0;

	while (sum <= 3000000)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i != 31)
			printf(", ");
		a = b;
		b = sum;
		i++;
	}
	printf("\n");
	return (0);
}

