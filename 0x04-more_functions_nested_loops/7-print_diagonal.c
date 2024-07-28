#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - uses \ character to print diagonal line
 * @n: its a variable
 */

void print_diagonal(int n)
{
	int a, b;

	if (n >= 1)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


