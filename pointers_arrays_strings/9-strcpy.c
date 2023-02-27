#include "main.h"
#include <string.h>
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
