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
	int digt1 = 0 , digt2;

	while (digt1 <= 9)
	{

		digt2 = 0;
		while (digt2 <= 9)
		{
			if (digt1 != digt2 && digt1 < digt2)
			{
				putchat(digt1 + 48);
				putchar(digt2 + 48);

				if (digt1 + digt2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digt2++;
		}
		digt1++;
	}
	putchar('\n');
	return (0);
}
