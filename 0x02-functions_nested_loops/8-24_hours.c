#include "main.h"
/**
 *jack_bauer - Entry point
 *
 *Return: Void always
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
if (i < 10)
{
_putchar('0');
}
_putchar(i + '0');
_putchar(':');
for (j = 0; j < 60; j++)
{
if (j < 10)
{
_putchar('0');
}
_putchar(j + '0');
}
_putchar('\n');
}
}