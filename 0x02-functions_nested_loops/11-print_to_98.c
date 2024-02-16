#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - To print digits to 98
 * @n: The digit to check
 * Return: void
 */
void print_to_98(int n)
{
	if(n < 98)
	{
		for(; n <= 98; n++)
		{
			if (n == 98)
		{
			printf("%d", n);
			break;
		}	
			else
			{
				printf("%d, ", n);
	}
	}
	}
	else if(n > 98)
	{
		for(; n >= 98; n--)
		{
			if (n == 98)
		{
			printf("%d", n);
			break;
		}
			else
			{
				printf("%d, ", n);
			}
	}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
