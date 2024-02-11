#include <stdio.h>
/**
 * main: to display hexadecimal numbers
 *
 * Return: always 0
 */
int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
