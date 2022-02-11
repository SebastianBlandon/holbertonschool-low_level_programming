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

	for (c = 97 ; c < 123 ; c++)
		putchar(c);
	for (c = 65 ; c < 91 ; c++)
                putchar(c);
	putchar(10);
	return (0);
}
