#include "main.h"

/**
* print_number - Prints integers using _putchar function
* @n: The integer to print
* Return: Nothing
*/
void print_number(int n)
{
        int num = n;

        if (num < 0)
        {
                _putchar('-');
                num *= -1;
        }

        if ((num / 10) > 0)
                print_number(num / 10);

        _putchar((num % 10) + '0');
}
