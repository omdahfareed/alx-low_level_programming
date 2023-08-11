#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A c program
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digt = n % 10;
	if (digt > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digt);
	else if (digt == 0)
		printf("Last digit of %i is %i and is 0\n", n, digt);
	else if (digt < 6 && digt != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digt);
	return (0);
}
