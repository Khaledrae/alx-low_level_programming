#include "main.h"
/**
 *_puts
 *@str: the string to print
 *
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
