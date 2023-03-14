#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_strdup - function that returns a pointer
* to a newly allocated space in memory
* @str: a pointer that points to the string given as a parameter
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	int length;
	char *new_string;

	if (str == NULL)

	{
		return (NULL);
	}

	length = strlen(str) + 1;
	new_string = malloc(length * sizeof(char));

	if (new_string == NULL)

	{
		return (NULL);
	}

	strcpy(new_string, str);

	{
		return (new_string);
	}
}
