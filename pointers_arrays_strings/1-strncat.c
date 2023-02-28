#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
