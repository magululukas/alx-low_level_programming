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

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
	}
	alpha++;
	return (0);
}
