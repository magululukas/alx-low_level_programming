#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - function concatinates two strings.
 * @dest: its a pointer to the first string.
 * @src: its a pointer to the second string.
 * Return: returns a string concatinated.
 */
char *_strcat(char *dest, char *src)
{
	char *last = dest;

	while (*last)
	{
		last++;
	}
	while (*src != '\0')
	{
		*last = *src;
		last++;
		src++;
	}
	*last = '\0';
	return (dest);
}
