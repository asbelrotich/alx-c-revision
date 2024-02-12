#include <stdio.h>
/**
 * main - print different combinations of two digits
 *
 * return: always 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = '0' + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
