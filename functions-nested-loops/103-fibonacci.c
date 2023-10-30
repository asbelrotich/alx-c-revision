#include <stdio.h>
/**
 * main - prints the sum of only even fibonacci digits
 * values of fibonacci does not exceed 4,000,000
 * return 0
 */
int main(void)
{
	int c = 0, a = 1, b = 2;
	int sum = b;

	while (a + b < 4000000)
	{
		b += a;
		if(b % 2 == 0)
			sum += b;
		a = b - a;
		++c;
	}
	printf("%d\n", sum);
	return (0);
}
