#include "main.h"
#include <stdio.h>

/**
 * puts_recursion - function that prints a string, followed by a new line
 * @s: a pointer to a character array
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	printf("\n");
	return;
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
