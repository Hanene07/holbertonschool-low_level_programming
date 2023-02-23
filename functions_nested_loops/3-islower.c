#include "main.h"
#include <stdio.h>
#include <stdlib>
#include <ctype.h>

/**
* _islower - checks lowercase character
* Return 1 for lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return 1;
	}

	return (0);
}
