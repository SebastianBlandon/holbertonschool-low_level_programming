#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Print times table with the input.
 * @n: int type input
 * Return: void function
 */
void print_times_table(int n)
{
	int n1, n2;

	if (n <= 15 && n >= 1)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				printf("%i", n1 * n2);
				if (n2 < n)
				{
					printf(",");
					if (n1 * (n2 + 1) < 10)
						printf("   ");
					else if (n1 * (n2 + 1) < 100 && n1 * (n2 + 1) >= 10)
						printf("  ");
					else
						printf(" ");
				}
			}
			printf("\n");
		}
	}
}
