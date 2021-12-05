#include <stdio.h>
/**
 * main - Starts Here!
 *
 * putchar - For printing text
 *
 * Return: zero always
 */
char main(void)
{
	char ALP;

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		for (ALP = 'A'; ALP <= 'Z'; ALP++)
		{
			putchar(ALP);
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
