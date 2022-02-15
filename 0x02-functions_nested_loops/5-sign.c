#include "main.h"
/**
 * print_sign - Return 1 if n>0, 0 if n=0 & -1 if n<0.
 * @n: int type intiger
 * Return: 1 if n>0, 0 if n=0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
