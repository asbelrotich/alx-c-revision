#include "main.h"
/**
 * print_numbers - Prints only numbers
 * Return: void
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

