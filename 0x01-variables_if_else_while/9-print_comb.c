#include <stdio.h>

int main()
{
	int a;
	for (a=48; a<58; a++)
	{
		putchar(a);
		if (a<57)
		{
			putchar(44);
			putchar(32);
		}
	putchar(10);
	}
	return 0;
}
