#include "main.h"
/**
 * _strlen - strlen.
 * @s: pointer to char array input
 * Return: int function
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
