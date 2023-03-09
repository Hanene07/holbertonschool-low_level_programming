#include "main.h"                                             
#include <string.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from 
 */
char *_strcpy(char *dest, char *src)                          
{
	char *aux = dest;

	while (*src != '\0')
		*dest++ = *src++;
	return (aux);
}
