#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 * @*s1: a pointer to a character string
 * @*s2: function takes two strings (s1 and s2)
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);


	char *result = (char *) malloc(len1 + len2 + 1);

	int i;
		for (i = 0; i < len1; i++)

		{
			result[i] = s1[i];
		}

		for (i = 0; i < len2; i++)

		{
			result[len1 + i] = s2[i];
		}

	result[len1 + len2] = '\0';
	{
		return (result);
	}
}
