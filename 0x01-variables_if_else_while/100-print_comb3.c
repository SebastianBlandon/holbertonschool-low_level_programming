#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the function print the alphabet in minus
 * Return: 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 48 ; n1 < 57 ; n1++)
	{
		for (n2 = 49 ; n2 < 58 ; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
