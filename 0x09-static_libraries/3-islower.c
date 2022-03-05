#include "main.h"
/**
 * _islower - islower.
 * @c: int variable input
 * Return: int function
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
