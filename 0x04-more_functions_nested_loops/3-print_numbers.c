#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints counting numbers
 * @void: null parameter
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
