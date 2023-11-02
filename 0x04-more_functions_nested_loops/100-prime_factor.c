#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of a number
 * @maxf the largest prime factor
 * return 0
 */
int main(void)
{
	long number = 612852475143;
	long maxf, x;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if(number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
