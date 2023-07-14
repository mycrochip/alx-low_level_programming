#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, tens2, unit1, unit2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		/* tens2 is dependent on tens1 as such */
		/*tens2 = tens1;*/
		for (unit1 = 0; unit1 <= 9; unit1++)
		{

			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				/* unit2 is dependent on unit1 as such */
				/*unit2 = unit1 + 1;*/
				for (unit2 = unit1 + 1; unit2 <= 9; unit2++)
				{
					putchar(tens1 + '0');
					putchar(unit1 + '0');

					putchar(' ');

					putchar(tens2 + '0');
					putchar(unit2 + '0');
					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
