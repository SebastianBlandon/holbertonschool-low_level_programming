#include "main.h"
#include <stdlib.h>
/**
 * *_strchr - ocates a character in a string.
 * @s: pointer to char array input
 * @c: char input
 * Return: pointer to char dest
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
