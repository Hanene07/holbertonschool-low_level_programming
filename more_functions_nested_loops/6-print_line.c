#include "main.h"

/**
* print_line - a function that draws a straight line in the terminal.
* Return: straight line in the terminal
*/
void print_line(int n)
{
	if (n <= 0)
{
	putchar('\n');
	return;
}
for (int i = 0; i < n; i++)
putchar('_');
}
putchar('\n');
}
