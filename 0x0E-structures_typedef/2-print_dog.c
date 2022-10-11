#include "dog.h"
#include <stdio.h>

#ifndef _DATTR
#define _DATTR(x) ((x) ? (x) : "(nil)")
#endif /* _DATTR */

/**
 * print_dog - Prints the attributes of a dog variable.
 *@d: A pointer to a variable of type dog struct.
 *Return: Nothing.
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
		return;

	name = d->name;
	age = d->age;
	owner = d->owner;

	printf("Name: %s\nAge:%f\nOwner: %s\n", _DATTR(*name), age, _DATTR(*owner));
}
