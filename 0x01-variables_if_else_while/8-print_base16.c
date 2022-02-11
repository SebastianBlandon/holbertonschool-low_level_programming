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
		putchar(c);
	for (c = 97 ; c < 103 ; c++)
		putchar(c);
	putchar(10);
	return (0);
}
