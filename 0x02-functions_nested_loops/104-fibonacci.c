#include <stdio.h>
/**
 * main - the function print fibonacci 50
 * Return: void function
 */
int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, sum = 0;

	for (i = 0; i < 97; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i != 96)
			printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

