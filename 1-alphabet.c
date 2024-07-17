#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function prints the alphabet in lower case.
 * Return: returns nothing (void)
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
