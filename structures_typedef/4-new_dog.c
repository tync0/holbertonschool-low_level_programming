#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: value
 * @age: value
 * @owner: value
 * Return: none
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nm, ow, i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	nm = strlen(name);
	ow = strlen(owner);
	dog->name = malloc(nm + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < nm ; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	dog->owner = malloc(ow + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < ow ; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
