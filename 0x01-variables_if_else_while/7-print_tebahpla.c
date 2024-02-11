#include <stdio.h>
/**
 * main - To display alphabets in reverse mode
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
