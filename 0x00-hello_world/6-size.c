#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d  byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
write("Anything\n");
return (0);
}
