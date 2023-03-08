#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * @n: the integer number that the is_prime_number() function
 * Return: function that returns 1, otherwise return 0
 */
int is_prime_number(int n);
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
