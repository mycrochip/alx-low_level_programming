#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Attributes for a dog.
 * @name: Pointer to a dog's identfier.
 * @age: Dog's age.
 * @owner: Pointer to the dog owner's name.
 *
 * Description: This structure represents the properties
 * defined for any standard dog using this template.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);



#endif /* DOG_H */
