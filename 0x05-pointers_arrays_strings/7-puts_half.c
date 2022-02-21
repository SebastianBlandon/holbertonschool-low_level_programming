#include "main.h"
/**
 * puts_half - print the half of a string
 * @str: pointer to char input
 * Return: void function
 */
void puts_half(char *str)
{
int i = 0, n;
for (i = 0; str[i] != '\0'; i++)
;
n = i++;
for (n /= 2; str[i] != '\0'; n++)
_putchar(str[n]);
_putchar(10);
}
