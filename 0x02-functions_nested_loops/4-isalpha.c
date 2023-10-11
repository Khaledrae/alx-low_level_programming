#include "main.h"
/**
 *_isalpha - Checks For Alphabets
 *@c: A random character
 *
 *Return: 1 if character is a letter else 0
 */
int _isalpha(int c) 
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
