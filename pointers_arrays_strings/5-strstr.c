#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: char pointer
 * @needle: char pointer
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	int count;
	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)								
		if (!(needle[count]))
														return (haystack);
	}
	return (0);
}