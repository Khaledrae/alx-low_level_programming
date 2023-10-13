#include "main.h"
/**
 *print_triangle - entry point
 *@size: The size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
int w, h, hyp;
/* Going Down */
for (w = 1; w <= size; w++)
{
/* Sideways */
for (h = 1; h <= size; h++)
{
hyp = size - h;
/* spaces */
if (hyp > 0 )
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
