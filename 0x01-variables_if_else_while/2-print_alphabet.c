#include <stdio.h>
/**
 * main - To print alphabets
 * putchar: the function used in printing alphabets
 * return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
