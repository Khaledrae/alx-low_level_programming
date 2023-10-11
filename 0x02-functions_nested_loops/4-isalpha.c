#include "main.h"
/**
 *_isalpha - Entry point
 *@n: A random character
 *Return: int Always
 */
int _isalpha(int n)
{
if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
