#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		a++;
		_putchar('\n');
	}
}

