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
if (i % 2 != 0)
n = (i - 1) / 2;
else
n = i / 2;
for (; str[i] != '\0'; n++)
_putchar(str[n]);
_putchar(10);
}
