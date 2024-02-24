#include "main.h"
/**
 * _puts: This is the function to print string
 * @str: The variable
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
