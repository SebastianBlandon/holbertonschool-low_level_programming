#include "main.h"
#include <stdlib.h>
/**
 * _strchr - strchr.
 * @s: pointer char array input
 * @c: char character input
 * Return: char function
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
