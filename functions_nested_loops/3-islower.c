#include "main.h"
#include <ctype.h>

/**
* _islower - checks lowercase character
* Return 1 for lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z') 
	 return 1;
	 else
		 return 0;
}
