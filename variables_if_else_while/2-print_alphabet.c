#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*  Return: Always 0 (Succes)
*/

int main(void)

{
	char c = 'a';
	while(c = 'a' <= 'z')
	{
		putchar(c);
		c++;
		putchar('\n');
	}
	return 0;
}
