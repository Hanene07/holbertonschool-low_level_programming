#include "main.h"

/**
* _isalpha - Check for alphabetic character
* @c: The character to be cheched
* Return: 1 for alphabetic character or 0 for anything else
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	
	{
		return (1);
	}
	else
		return (0);
}
