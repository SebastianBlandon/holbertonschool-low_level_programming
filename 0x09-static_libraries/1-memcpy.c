#include "main.h"
/**
 * _memcpy - memcpy.
 * @dest: pointer char array input
 * @src: pointer char array input
 * @n: unsigned int variable input
 * Return: char function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
