#include "main.h"
/**
 * main- prints squares
 * @size number of times the square should be printed
 */
void print_square(int size)
{
	int n, m;
	if(size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(n = 0; n < size; n++)
		{
			for(m = 0; m < size; m++) 
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
