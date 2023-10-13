#include "main.h"
/**
 *_isdigit - Checks for a number
 *@c: The character to be checked
 *Return: (0) Always
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
