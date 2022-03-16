#include "function_pointers.h"
/**
 * print_name - print name using the pointer to void function
 * @array: pointer to int input
 * @size: size_t type variable input
 * @action: pointer to void function input
 * Return: void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
