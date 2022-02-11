#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the function print the alphabet in minus
 * Return: 0
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48 ; n1 < 56 ; n1++)
	{
		n2 = n1 + 1;
		while (n2 < 57)
		{
			n3 = n2 + 1;
			while (n3 < 58)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55)
				{
					putchar(44);
					putchar(32);
				}
				n3++;
			}
			n2++;
		}
	}
	putchar(10);
	return (0);
}
