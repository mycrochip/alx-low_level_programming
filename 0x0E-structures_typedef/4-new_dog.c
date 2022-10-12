#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*
 *#ifndef _NEW_DOG
 *#define _NEW_DOG
 *#define _DATTR(x) ((x) ? (x) : (NULL))
 *#endif // _NEW_DOG
*/
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
	char *cpyname, *cpyowner;
	int len_name, len_owner, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = len_owner = 0;
	while (name[len_name++])
		;
	while (owner[len_owner++])
		;

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	a_dog->name = cpyname;
	a_dog->age = age;
	a_dog->owner = cpyowner;

	return (a_dog);
}
