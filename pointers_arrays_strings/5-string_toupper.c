#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @s: an input string
 * Return : char
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
