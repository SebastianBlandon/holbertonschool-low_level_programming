#include "main.h"
/**
 * *_strncpy - copy two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * @n: n bytes from src
 * Return: pointer to char dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
