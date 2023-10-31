#include "main.h"
/**
 * main - checks if the input is uppercase or lowercase
 * return 1 when uppercase and 0 when lowercase
 */
int _isupper(int c)
{
	if(c >= 65 || c <= 90)
	{
		return (1);
	}
	if(c >= 97 || c <= 122)
	{
		return (0);
	}
}
