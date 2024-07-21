#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - cmputes the last digit of any figure
 * Return: int 0
 * @a: is sn in variable
 */
int print_last_digit(int a)
{
	int lastd = abs(a) % 10;

	_putchar('0' + lastd);
	return (lastd);
}

