#include <stdio.h>
/**
 * first - prints something before the main() function
 * __attribute__((constructor)) it's important to do something before main
 * Return: Nothing.
 */
void first(void) __attribute__((constructor));

/**
 * first - prints something before the main() function
 * Return: Nothing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}
