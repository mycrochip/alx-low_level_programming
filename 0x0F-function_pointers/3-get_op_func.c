#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -  Selects the correct function
 * that corresponds to an operator
 * @s: Pointer to a char operator
 * Return: A pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);

	return (NULL);
}
