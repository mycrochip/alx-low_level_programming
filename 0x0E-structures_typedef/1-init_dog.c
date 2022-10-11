# include "main.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 *@d: A pointer to the dog struct.
 *@name: A pointer to the variable identifier.
 *@age: The variable age attribute.
 *@owner: A pointer to the variable owner identifier.
 *Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
