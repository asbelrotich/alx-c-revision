#include <stdio.h>
/**
 * prints first 50 fibonnacii numbers
 * starting with 1 and 2 followed by anew line
 * numbers must be separated by comma followed by a space
 * fibonacci number is a number which is a sum of two preceding numbers
 * return 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	while (c < 50)
	{
		if (c == 0)
		{
			printf("%d,\n ", a);
		}
		else if (c == 1)
		{
			printf("%d,\n ", b);
		}
		else
		{
			b += a;
			a = b - a;
			printf("%d,\n ", b);
		}
		++c;
	}
	printf("\n");
}
