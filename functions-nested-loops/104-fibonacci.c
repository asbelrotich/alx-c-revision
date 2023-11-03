#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers starting with 1 and 2
 * the numbers should be separated by comma followed by space
 * return 0
 */
int main(void)
{
	int a = 0, b = 1, c = 2;

	while(a < 98)
	{
		if(a == 0)
			printf("%d, ", b);
		else if(c == 1)
			printf("%d, ", c);
		else
		{
			c += b;
			b = c - b;
			printf("%d, ", c);
		}
		++a;
		printf("\n");
	}
	return (0);
}
