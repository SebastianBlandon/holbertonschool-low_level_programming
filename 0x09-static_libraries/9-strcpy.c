#include "main.h"
/**
 * *_strcpy - strcpy.
 * @dest: pointer char array input
 * @src: pointer char array input
 * Return: char function
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
