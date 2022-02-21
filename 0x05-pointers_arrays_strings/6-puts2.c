#include "main.h"
/**
 * puts2 - print a string slecting
 * @str: pointer to char input
 * Return: void function.
 */
void puts2(char *str)
{
int i = 0, j = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + j));
j = j + 2;
i++;
}
_putchar(10);
}
