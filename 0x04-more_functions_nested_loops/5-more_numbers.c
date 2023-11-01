#include "main.h"


/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Return: 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)

{
	int x;
	int y = 0;
	while(y < 10)
	{
	for(x = 0; x <= 14; x++)
	{
		{
		if(x > 9)
		{
			_putchar((x / 10) + '0');
		}
		_putchar((x % 10) + '0');
		}
	}
	_putchar('\n');
	y++;
	}
}
