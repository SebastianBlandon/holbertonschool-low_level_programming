#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse arrat integer function
 * @a: pointer to int input
 * @n: int type value
 * Return: void function
 */
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse_array(int *a, int n)
{
	int *p1 = a, *p2 = a + n - 1;

	while (p1 < p2)
	{
		swap(p1, p2);
		p1++;
		p2--;
	} 
}
