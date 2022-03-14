#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a variable of type struct dog
 * @d: struct dog input
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name : (nil)\n");
		else
			printf("Name : %s\n", d->name);
		if (d->age < 0)
			printf("Age : (nil)\n");
		else
			printf("Age : %f\n", d->age);
		if (!d->owner)
			printf("Owner : (nil)\n");
		else
			printf("Owner : %s\n", d->owner);
	}
}
