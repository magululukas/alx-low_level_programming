#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints a half of a string with specified ifs.
 * @str: its a pointer.
 */
void puts_half(char *str)
{
	int a = strlen(str);
	int start, b;

	if (a / 2 == 0)
	{
		start = a / 2;
	}
	else
	{
		start = (a + 1) / 2;
	}
	for (b = start; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

