#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - tests if input is lower case.
 * Return: 1 if lowercase and 0 if not
 * @c: its a variable
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
