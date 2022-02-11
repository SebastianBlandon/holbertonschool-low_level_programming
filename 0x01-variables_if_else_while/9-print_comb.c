#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the function print the alphabet in minus
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
