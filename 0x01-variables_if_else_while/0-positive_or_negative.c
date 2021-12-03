#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - contains if protocals
 *
 *printf - prints out strings according to the ifs
 *
 * Return: zero always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
