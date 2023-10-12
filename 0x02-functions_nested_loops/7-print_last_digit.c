#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: Number to get absolute for
 *
 *Return: Last digit value
 */
int print_last_digit(int n)
{
n = n%10;
_putchar(n+'0');
return n;
}
