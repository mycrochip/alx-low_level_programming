#include <stdio.h>
#include "dog.h"

#ifndef _NEW_DOG
#define _NEW_DOG
#define _DATTR(x) ((x) ? ((x) : NULL))
#endif /* _NEW_DOG */

/**
 * new_dog - Creates a new dog_t variable.
 * @name: Pointer to the varible identifier.
 * @age: Age attribute of the dog_t variable.
 * @owner: Pointer to the variable owner identifier.
 * Return: Pointer to a dog_t variable.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	a_dog->name = _DATTR(name);
	a_dog->age = _DATTR(age);
	a_dog->owner = _DATTR(owner);

	if (a_dog->name && a_dog->age && a_dog->owner)
		return (a_dog);

	return (NULL);
}
