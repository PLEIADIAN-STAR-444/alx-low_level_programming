#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 * greater then, is 0 and is nit less then 6.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of of %1 is %1 and is greater then 5\n", n, digit);
	else if (digit == 0)
		printf("Last diuitbof %i is %i and isless than 6 and nit 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less then 6 and not 0\n", n, digit);

	return (0);
}

