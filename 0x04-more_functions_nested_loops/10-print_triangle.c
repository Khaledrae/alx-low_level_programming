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
if (size <= 0)
break;
/* Sideways */
for (h = 1; h <= size - w; h++)
{
for (h = 1; h <= size - w; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
