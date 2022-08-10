#include "search_algos.h"
#include<math.h>
/**
 * jump_search - function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(n), prev = 0;

	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
		return (-1);
	}

	while (arr[prev] < x)
	{
		prev++;
		if (prev == min(step, n))
			return (-1);
	}
	if (arr[prev] == x)
		return (prev);

	return (-1);
}

/**
 * min - calculate the min of two numbers
 * @a: int value input
 * @b: int value input
 * Return: return the min value
 */
int min(int a, int b)
{
	if(b > a)
		return (a);
	else
		return (b);
}
