#include "main.h"

/**
 * print_alphabet_x10 - print alphabt 10 times using _putchar
*/

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
