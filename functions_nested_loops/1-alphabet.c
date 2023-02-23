#include "main.h"
#include <stdio.h>

/**
* main - prints _putchar, followed by a new line
* Return: Always 0 (Succes)
*/

void print_alphabet(void);
{
char i;

	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	return (0);
}
