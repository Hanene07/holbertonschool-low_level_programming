#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Succes)
*/

int main(void)

{
	int e;
	char moy;

	for (e = '0'; e <= '9'; e++)
		putchar(e);
	for (moy = 'a'; moy <= 'f'; moy++)
		putchar(moy);
	putchar('\n');
	
	return (0);
}
