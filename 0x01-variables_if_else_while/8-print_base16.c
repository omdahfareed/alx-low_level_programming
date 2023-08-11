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
	int digt = 48;

	while (digt <= 102)
	{
		putchar(digt);
		if (digt == 57)
			digt = digt + 39;
		digt++;
	}
	putchar('\n');

	return (0);
}
