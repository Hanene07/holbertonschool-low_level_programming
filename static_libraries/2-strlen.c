#include "main.h"

/**
 * strlen - function that returns the length of a string                 
 * @s: string to evaluate                                               
 * Return: y
 */ 
int _strlen(char *s)                                                      
{ 
	int y = 0;

	while (s[y] != '\0')
	{                                                              
		y++;                                                     
	}
	return (y);
}	
