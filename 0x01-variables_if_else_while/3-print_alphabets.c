#include <stdio.h>
/**
 * main - Starts Here!
 *
 * putchar - For printing text
 *
 * Return: zero always
 */
int main(void)
{
	char ALP;

	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
