#include "main.h"
/**
 *print_square - Prints a square based on given param\
 *@size: size of the square
 */
void print_square(int size)
{
int i, j;
/* height */
for (i = 0; i < size; i++)
{
if (size == 0)
{
_putchar('\n');
break;
}
/* Width */
for (j = 0; j < size; j++)
{
_putchar('#');
if (i == size - 1)
{
continue;
}
}
_putchar('\n');
}
}
