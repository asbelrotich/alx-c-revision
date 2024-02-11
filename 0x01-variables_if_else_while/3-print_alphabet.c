#include <stdio.h>
/**
 * main: To print alphabets both in capital and small
 * putchar: The function used to print
 * Return: alwsays 0
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
