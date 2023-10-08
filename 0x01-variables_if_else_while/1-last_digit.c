#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last_digit = n % 10;
if (last_digit > 5)
printf("Last digit of %i is greater than 5\n", n);
else if (last_digit == 0)
printf("Last digit of %i is 0", n);
else if (last_digit < 6 && last_digit != 0)
printf("Last digit of %i is less than 6 and not 0\n", n);
return (0);
}
