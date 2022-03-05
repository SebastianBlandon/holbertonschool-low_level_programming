#include "main.h"
/**
 * _memset - memset.
 * @s: pointer char array input
 * @b: char character input
 * @n: unsigned int variable input
 * Return: char function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
