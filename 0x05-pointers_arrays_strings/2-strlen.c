#include "main.h"
/**
 * _strlen - checks the length of the string
 * @s: The pointer
 *
 * Return: size of string length
 */
int _strlen(char *s)
{
	int n = 0;

	while(*s++)
		n++;
	return (n);
}
