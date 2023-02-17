#include <stdio.h>

/**
* main - Entry point
*   
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (int)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (int)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (int)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (int)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (int)sizeof(float));
return (0);
}
