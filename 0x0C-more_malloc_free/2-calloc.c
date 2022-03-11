#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 *  The _calloc function allocates memory for an array of nmemb elements
 *  of size bytes each and returns a pointer to the allocated memory.
 *  The memory is set to zero
 * @nmemb: unsigned int input
 * @size: unsigned int input
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *  If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *alloc;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	alloc = malloc(nmemb * size + 1);
	if (!alloc)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		alloc[i] = 0;
	alloc[i] = '\0';
	return (alloc);
}
