#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * Description: A c program
 *
 * Return: 1 if n is greater than zero, 0  if n is zero, -1  if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}

