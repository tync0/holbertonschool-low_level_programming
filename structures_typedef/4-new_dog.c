#include <stdio.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: value
 * @age: value
 * @owner: value
 * Return: none
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog.name = name;
	dog.age = age;
	dog.owner = owner;
	
	return (dog);
}
