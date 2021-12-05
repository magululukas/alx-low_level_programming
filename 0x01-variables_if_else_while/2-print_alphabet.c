#include <stdio.h>

/**
 * main -Starts here
 *
 * putchar - Printing out the alphabet
 *
 * Return: zero always
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
