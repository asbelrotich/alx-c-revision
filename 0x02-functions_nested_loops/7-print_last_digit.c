#include "main.h"
/**
 * print_last_digit - checks the last digit
 *
 * return: last digit
 */
int print_last_digit(int a)
{

	int b = a % 10;
	if (b < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
