#include "main.h"
/**
 * swap_int - It swaps the values 
 * @*a: first value
 * @*b: Second value
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
