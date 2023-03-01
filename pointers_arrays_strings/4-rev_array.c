#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an input array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
