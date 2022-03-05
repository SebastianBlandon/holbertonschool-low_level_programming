#include "main.h"
/**
 * _strspn - strspn.
 * @s: pointer char array input
 * @accept: pointer char array input
 * Return: unsigned int function
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n_bytes = 0, flag_n;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag_n = n_bytes;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
				n_bytes++;
		}
		if (flag_n == n_bytes)
			break;
	}
	return (n_bytes);
}
