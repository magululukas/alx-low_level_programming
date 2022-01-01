#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Stats here
 *
 * printf - Printing out strings
 *
 * Return: zero always
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 6 != 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} /* your code goes there */
	return (0);
}
