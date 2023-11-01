#include "main.h"
/**
 * main - prints a straight line according to the number of times needed
 * @n is the number of times to be printed
 * return 0
 */
void print_line(int n)
{
	int x;
	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(x = 0; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
