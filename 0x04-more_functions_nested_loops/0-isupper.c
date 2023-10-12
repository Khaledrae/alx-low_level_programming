#include "main.h"
/**
 *_isupper - entry point
 *@c: The character to be checked
 *Return: (0) Always
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
