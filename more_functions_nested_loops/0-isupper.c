#include "main.h"
#include <stdio.h>

/**
* _isupper - unction that checks for uppercase character.
* @c: parameter of the function
* Return: 1 if c is uppercase return 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
