#include "main.h"

int _ctoi(char *c);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_1, len_2, i, sum;
	int ones, tens, temp;
	char *num_1, *num_2;
	char *res;

	num_1 = n1, num_2 = n2;

	while (*num_1 != '\0')
		len_1++, num_1++;
	while (*num_2 != '\0')
		len_2++, num_2++;

	num_1--, num_2--;
	if ((size_r < len_1) || (size_r < len_2))
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size_r; i++)
		{
			*res = '0';
			res++;
		}
		*res = '\0';

		for (; size_r >= 1; size_r--, num_1--, num_2--)
		{
			sum = _ctoi(num_1) + _ctoi(num_2);
			if ((sum > 9) && (size_r == 1))
			{
				return (0);
			}
			else if (sum > 9)
			{
				ones = sum % 10;
				tens = sum / 10;
				temp = (_ctoi(res) + ones) / 10;
				*res = (_ctoi(res) + ones) % 10 + '0';
				*(res - 1) = tens + temp + '0';
			}
			else
			{
				temp = (_ctoi(res) + sum) / 10;
				*res = (_ctoi(res) + sum) % 10 + '0';
				if (temp)
				{
					*(res - 1) = temp + '0';
				}
			}
			r = res;
		}
	}
	return (r);
}


/**
 * _ctoi - a function that converts char to integer
 * @c: An input char
 * Return: integer from conversion
 */
int _ctoi(char *c)
{
	int i;

	for (i = 0; i <= 9; i++)
		if ((*c - '0') == i)
			return (i);
	return (0);
}
