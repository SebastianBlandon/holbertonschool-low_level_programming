#include "main.h"
/**
 * *rot13 - encodes a string into ROT13
 * @a: pointer to char array input
 * Return: pointer to char a
 */
char *rot13(char *a)
{
	int i;
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if ((*(a + i) > 64 && *(a + i) < 91) || (*(a + i) > 96 && *(a + i) <= 123))
		{
			*(a + i) = (*(a + i) - 65 > 25) ?
				lower[*(a + i) - 97] : upper[*(a + i) - 65];
		}
	}
	return (a);
}
