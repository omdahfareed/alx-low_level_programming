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

	int digt = 0, digt1;
	while (digt <= 99)
	{

		digt1 = digt;
		while (digt1 <= 99)
		{
			if (digt1 != digt)
			{
				putchar((digt / 10) + '0');
				putchar((digt % 10) + '0');
				putchar(' ');
				putchar((digt1 / 10) + '0');
				putchar((digt1 % 10) + '0');
				if (digt + digt1 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digt1++;
		}
		digt++;
	}
	putchar('\n');

	return (0);
}
