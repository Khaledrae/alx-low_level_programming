#include "main.h"
/**
 *print_numbers - Prints Numbers from '0-9'
 *
 *Return: a void
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
