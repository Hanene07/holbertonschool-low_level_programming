#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: the destination value
 * @src: the source value
 * @n: the copie limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
