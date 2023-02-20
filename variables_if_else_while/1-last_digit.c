#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Return: always 0 (Succes)
*/

/* betty style doc for function main goes there */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if ((n%10) > 5)
		printf("%d and is greater than 5\n", n);
	else if (0 == n)
	       	printf("%d and is 0\n", n);
	else if (n < 6)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
