#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of the input
 * Return: 1, 0, and -1 accordingly
 * @n: its an integer variable
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
