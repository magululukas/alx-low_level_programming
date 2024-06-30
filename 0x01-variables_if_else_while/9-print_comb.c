#include <stdio.h>
/**
 * main - func uses putchar to disply output
 *
 * Return: its zero
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
