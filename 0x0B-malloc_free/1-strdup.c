#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
unsigned long int _strlen(char *s)
{
	unsigned long int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: char input
 * Return: NULL if str = NULL,
 *  returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *str_cpy;

	if (!str)
		return (NULL);

	size = _strlen(str);
	str_cpy = malloc((size * sizeof(str)) + 1);
	if (!str_cpy)
		return (NULL);

	for (i = 0; i <= size; i++)
		str_cpy[i] = str[i];

	return (str_cpy);
}
