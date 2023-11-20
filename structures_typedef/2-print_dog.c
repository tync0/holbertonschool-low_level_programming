#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog structure
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == NULL ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %f\n", d->owner);
}
