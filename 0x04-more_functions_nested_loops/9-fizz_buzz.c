#include <stdio.h>
/**
 * main - printd the numbers from 1 to 100
 * it checks if the number is multiple of 3 0r 5
 * multiple of 3 prints fizz amd multiple of 5 buzz
 * if it has both multiple of 3 amd 5 print fizzbuzz
 * return 0
 */
int main(void)
{
	int a;

	for(a = 1; a <= 100; a++)
	{
		if((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if(a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if(a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
