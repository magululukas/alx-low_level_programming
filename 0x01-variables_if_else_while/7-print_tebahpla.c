#include <stdio.h>
/**
 * main - prints the al[phabet in reverse
 *
 * Return: intger
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
