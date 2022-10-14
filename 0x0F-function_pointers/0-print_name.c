#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name from a template.
 * @name: Pointer to the desired name.
 * @f: Pointer to a template function.
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
