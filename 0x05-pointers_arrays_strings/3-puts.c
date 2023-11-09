#include "main.h"
/**
 * prints string  values
 * return (void)
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
