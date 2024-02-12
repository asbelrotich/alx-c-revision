#include <stdio.h>
/**
 * main - To print combination of two single digits
 *
 * Return 0
 */
int main(void)
{
	int b;

	b = 48;
	while (b <= 57)
	{
		putchar(b);
		{
			if (b != 57)
		putchar(44);
		putchar(32);
		}
		b++;
	}
	putchar ('\n');
	return (0);
}
