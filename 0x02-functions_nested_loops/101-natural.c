#include <stdio.h>
/**
 * main - the function print all multiples of 3 and 5 below 1024
 * Return: void function
 */
int main(void)
{
	int i = 0, sum = 0;

	do{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	} while (i < 1024);
	printf("%i\n", sum);
	return (0);
}

