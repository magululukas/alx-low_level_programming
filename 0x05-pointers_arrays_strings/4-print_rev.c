#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse form.
 * @s: its a pointer to a char
 */
void print_rev(char *s)
{
	int str = strlen(s);
	int a = str - 1;

	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
