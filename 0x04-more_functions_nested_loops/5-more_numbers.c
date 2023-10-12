#include "main.h"
/**
 *more_numbers - Prints Numbers from 0-9
 *
 *
 *Return: a void
 */
void print_most_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++ )
{
while (j <= 14)
{
_putchar(j+'0');
}
putchar('\n');
}
}
