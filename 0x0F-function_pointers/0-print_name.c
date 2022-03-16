#include "function_pointers.h"
/**
 * print_name - print name using the pointer to void function
 * @name: pointer to char input
 * @f: pointer to void function input
 * Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
