#include "main.h"
/**
 *strlen - entry point
 *@s: The string to weigh
 *
 *Return: The size of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
{
len++;
}
return (len);
}

