#include "main.h"
/**
 * main - prints digits from 0 to 9
 * but do niot print 2 and 4
 */
void print_most_numbers(void)
{
	char c;
	
	for(c = 0; c <= 9; c++)
	{
		if(c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
