#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * leet - functin encodes text to 1337 as specified.
 * @str: its the pointer to the string.
 * Return: returunsa modiied string
 */
char *leet(char *str)
{
	char *ptr = str;
	char map[128] = {0};

	map['a'] = map['A'] = '4';
	map['e'] = map['E'] = '3';
	map['o'] = map['O'] = '0';
	map['t'] = map['T'] = '7';
	map['l'] = map['L'] = '1';
	for (; *ptr != '\0'; ptr++)
	{
		if (map[(int)*ptr])/* Check if there is a 1337 mapping for the character*/
		{
			*ptr = map[(int)*ptr];/* Replace the character with its 1337 equivalent*/
		}
	}
	return (str);
}
