#include <stdio.h>
/**
 * main - fuction displays headecimals only.
 *
 * Return: Zero always
 */

int main(void)
{
	int figures;
	char letters;

	for (figures = 0; figures < 10; figures++)
		putchar(figures + '0');
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
