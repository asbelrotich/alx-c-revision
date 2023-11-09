#include "main.h"
/**
 * swap values of a number
 * return void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
