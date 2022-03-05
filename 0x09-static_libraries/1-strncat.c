#include "main.h"
/**
 * _strncat - strncat.
 * @dest: pointer char array input
 * @src: pointer char array input
 * @n: int variable input
 * Return: char function
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n && *(dest + j) != '\0' && *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
