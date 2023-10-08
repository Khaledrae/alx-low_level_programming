#include<stdio.h>
/* To be able to generate a random number */
#include<stdlib.h> 
/**
* 
*main entry point
*
*/
int main(void)
{
int n = rand();
if n>0
   printf("is positive\n");
else if n<0
   printf("is negative\n");
else
   printf("is zero\n");
}
