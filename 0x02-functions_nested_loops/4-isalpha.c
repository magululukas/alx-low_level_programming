#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if input is an alphabet regardless case
 * Return: 1 if true and 0 if not an alphabet
 * @c: its an integer variable
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
