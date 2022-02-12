#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the function print the alphabet in minus
 * Return: 0
 */
int main(void)
{
	int n1, n2, n3, n4, ft;

	for (n1 = 48 ; n1 < 58 ; n1++)
	{
		for (n2 = 48 ; n2 < 58 ; n2++)
		{
			ft = 1;
			for (n3 = n1 ; n3 < 58 ; n3++)
			{
				if ( ft == 1 )          /* If first time */
				{
					n4 = n2 + 1;   /* Take a one value */
					ft = 0;
				}
				else
					n4 = 48;   /* Take a zero value */
				while (n4 < 58)
				{
					putchar(n1);
					putchar(n2);
					putchar(32);
					putchar(n3);
					putchar(n4);
					if (!((n1 == 57) && (n2 == 56) && (n3 == 57) && (n4 == 57)))
					{
						putchar(44);
						putchar(32);
					}
					n4++;
				}
			}
		}
	}
	putchar(10);
	return (0);
}
