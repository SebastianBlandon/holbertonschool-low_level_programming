#include "main.h"
/**
 * _strcat - strcat.
 * @dest: pointer char array input
 * @src: pointer char array input
 * Return: char function
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
