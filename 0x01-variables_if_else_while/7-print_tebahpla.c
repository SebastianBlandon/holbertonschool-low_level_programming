#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the function print the alphabet in minus
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 122 ; c > 96 ; c--)
		putchar(c);
	putchar(10);
	return (0);
}
