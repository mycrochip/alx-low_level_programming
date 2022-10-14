#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Find the difference between two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Finds the modulo of a number using another number
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
