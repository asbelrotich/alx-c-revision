#include <stdio.h>
/**
 * prints - the list of all natural numbers below 1024 
 * then prints the sum of all multiple of 3 and 5 followed by a new line
 * return 0
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || ( a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n, ", b);
	return (0);
}
