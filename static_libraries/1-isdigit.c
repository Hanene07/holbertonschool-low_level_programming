#include "main.h"                                                                                             
#include <stdio.h>                                                                                            
                                                                                                              
/**                                                                                                           
 * _isdigit - a function that checks for a digit (0 through 9)                                                 * @c: parameter of the function                                                                               
 * Return: 1 if c is a digit return 0 otherwise
 */                                                                                                            
int _isdigit(int c)                                                                                           
{                                                                                                             
	if (c >= 48 && c <= 57)                                                                               
	return (1);                                                                                   	
	else                                                                                                  
	return (0);                                                                                   
}                 
