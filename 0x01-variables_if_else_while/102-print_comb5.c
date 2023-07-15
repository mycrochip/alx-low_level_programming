#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
        int digit1, digit2;
        int unit1, unit2, tens1, tens2;

        for (digit1 = 0; digit1 <= 99; digit1++)
        {
                tens1 = digit1 / 10;
                unit1 = digit1 % 10;
                for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
                {
                        tens2 = digit2 / 10;
                        unit2 = digit2 % 10;

                        putchar(tens1 + '0');
                        putchar(unit1 + '0');

                        putchar(' ');

                        putchar(tens2 + '0');
                        putchar(unit2 + '0');

                        if (digit1 + 1 == 99 && digit2 == 99)
                                break;

                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');

        return (0);
}
