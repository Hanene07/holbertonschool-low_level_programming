#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: pointer to the srting to print
 */
void _puts(char *str)
{	
	int j;

	for (j = 0; str[j] !=  '\0'; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
