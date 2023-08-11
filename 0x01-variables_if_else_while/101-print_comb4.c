#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digt1 = 0;
	int digt2, digt3;

	while (digt1 <= 9)
	{
		digt2 = 0;
		while (digt2 <= 9)
		{
			digt3 = 0;
			while (digt3 <= 9)
			{
				if (digt1 != digt2 && digt1 < digt2 && digt2 != digt3 && digt2 < digt3)
				{
					putchar(digt1 + '0');
					putchar(digt2 + '0');
					putchar(digt3 + '0');
					if (digt1 + digt2 + digt3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digt3++;
			}
			digt2++;
		}
		digt1++;
	}
	putchar('\n');

	return (0);
}
