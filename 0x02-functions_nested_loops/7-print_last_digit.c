#include "main.h"

/**
 * print_last_digit - Function to print last digit
 *
 * @n: Takes an integer type of input
 *
 * Return: 0 (success)
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
