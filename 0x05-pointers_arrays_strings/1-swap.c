#include "main.h"
/**
 *swap_int - Swaps two integers bruv
 *@*a: first integer
 *@*b: second integer
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
