#include<stdio.h>
/* To be able to generate a random number */
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = rand();
if (n > 0)
printf("%li is positive\n", n);
else if (n < 0)
printf("%li is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
