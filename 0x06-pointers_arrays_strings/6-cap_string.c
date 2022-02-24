#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalize all the words
 * @a: pointer to char input
 * Return: char pointer function
 */
char *cap_string(char *a)
{
	int i = 0, special_character = 0;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	while (*a)
	{
		switch (*(a + i))
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '(':
		case ')':
		case '{':
		case '}':
		case '\n':
		case '\t':
		case ' ': special_character = 1; break;
		}
		if (special_character && *(a + 1) >= 97 && *(a + 1) <= 122)
				*(a + 1) -= 32; 
		special_character = 0;
		a++;
		i++;
	}
	return (a - i);
}
