#include "main.h"
/**
 * _isdigit - isdigit.
 * @c: int variable input
 * Return: int function
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
