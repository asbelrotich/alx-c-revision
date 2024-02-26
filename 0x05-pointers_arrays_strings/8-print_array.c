#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 *
 * @*a: the pointer value
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
