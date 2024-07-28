#include <stdio.h>
#include "main.h"
/**
 * print_line - uses putchar and character _to output a line
 * @n: its the number of times _ should print
 */
void print_line(int n)
{
	int a;

	if (n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
