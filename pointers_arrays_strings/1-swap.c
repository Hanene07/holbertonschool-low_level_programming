#include "main.h"

/**
* wap_int - function that swaps the values of two integers
*  @n: parameter
*  @a: integer
*  @b: integer
*  Return 0.
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	
	x = *a;
	*a = *b;
	*b = x;
}
