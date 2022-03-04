#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name executable
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
