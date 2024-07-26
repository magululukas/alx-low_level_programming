#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - tests for number digits
 *
 * Return: 1 if true or 0 if not
 *
 * @c: its a variable
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
