#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a given sring.
 * @str: its a poimter to the string.
 */
void puts2(char *str)
{
	char *a = str;

	while (*a != '\0')
	{
		_putchar(*a);
		a += 2;
	}
	_putchar('\n');
}
