#include "main.h"
/**
 * _isalpha - To check if its a letter
 * return void
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
