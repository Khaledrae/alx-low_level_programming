#include "main.h"
/**
 *void print_square - Prints a square based on given param
 *@size: size of the square
 *
 *Return: void
 */
void print_square(int size)
{
int i, j;
/* height */
for (i = 0; i <= size; i++)
{
/* Width */
for (j = 0; j <= size; j++)
{
if (j == 0 || j == size)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
