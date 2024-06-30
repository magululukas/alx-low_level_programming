#include <stdio.h>
/**
 * main - function prints alphabet except q and e
 *
 * Return: its zero
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
