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
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	_putchar((n % 10) + 48);
	return (n);
}
