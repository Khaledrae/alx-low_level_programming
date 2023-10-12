#include "main.h"
/**
 *void print_to_98 - Prints to 98 from a given number
 *
 *Return: Void
 */
void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n; i >= 98; i--)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
}
else
{
for (i = n; i <= 98; i++)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
}
}
