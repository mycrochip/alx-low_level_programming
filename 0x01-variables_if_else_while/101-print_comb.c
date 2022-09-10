#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int hunds, tens, unit;

	for (hunds = 0; hunds <= 7; hunds++)
	{
		for (tens = hunds + 1; tens <= 8; tens++)
		{
			for (unit = tens + 1; unit <= 9; unit++)
			{
				putchar(hunds + '0');
				putchar(tens + '0');
				putchar(unit + '0');

				if (hunds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
