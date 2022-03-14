#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog input
 * @name: char pointer input
 * @age: float value input
 * @owner: char pointer input
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	return;
}