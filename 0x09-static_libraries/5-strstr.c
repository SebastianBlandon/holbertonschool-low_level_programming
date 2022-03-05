#include "main.h"
#include <stdlib.h>
/**
 * _strstr - strstr.
 * @haystack: pointer char array input
 * @needle: pointer char array input
 * Return: char function
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, flag_needle = 0;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
			if (*(needle + j) == *(haystack + i + j))
				flag_needle++;
		if (*(needle + flag_needle) == '\0')
			return (haystack + i);
		flag_needle = 0;
	}
	return (NULL);
}
