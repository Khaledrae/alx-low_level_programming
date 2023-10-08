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
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
return (0);
}
