#include "main.h"

/**
 *print_line - Prints a line
 *@n: The legnth of the line
 */
void print_line(int n)
{
int i;
if (i <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
