#include "main.h"
/**
 * print_line - To print lines
 * @n: number lines to be printed
 * Return: void
 */
void print_line(int n)
{
	int a;
	if (n > 0)
	{
		for (a = 0; a<=n ; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
