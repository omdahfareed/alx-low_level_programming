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
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
