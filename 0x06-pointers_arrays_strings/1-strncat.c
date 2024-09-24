#include <stdio.h>
#include "main.h"
/**
 * _strncat - func concatinates strings up to n bytes from the src.
 * @dest: its a pointer to the first string
 * @src: its a pointer to the second string
 * @n: number of allocated bytes from src to be concatenated to dest
 * Return: returns a modified string as dest
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest)
	{
		dest++;
	}
	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}