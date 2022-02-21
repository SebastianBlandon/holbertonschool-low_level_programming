#include "main.h"
#include <unistd.h>
/**
 * print_rev - print a string reverse form
 * @s: pointer to char input
 * Return: void function
 */
void print_rev(char *s)
{
int i = 0, len = 0, size;

while (*(s + i) != '\0')
{
len++;
i++;
}
size = len;
for (i = 0; i <= size; i++)
{
_putchar(*(s + len--));
}
}
