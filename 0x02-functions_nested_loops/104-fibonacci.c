#include <stdio.h>
/**
 * main - the function print fibonacci 50
 * Return: void function
 */
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, sum = 0;

	for (i = 0; i < 85; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i != 84)
			printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

