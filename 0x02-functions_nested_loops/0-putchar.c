#include <stdio.h>
#include "main.h"
/**
 * main - prints a string using putchar.
 * Return: integer 0
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
