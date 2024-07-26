#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - tests if its uppercase
 *
 * Return: 1 if true and 0 othervwise
 *
 * @c: its a variable
 */

int _isupper(int c)
{

	if (isupper(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
