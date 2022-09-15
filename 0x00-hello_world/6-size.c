/*
 *  File: 6-size.c
 *  Author: Taylor Poczynek
 */
#include <stdio.h>

char c;
int i;
long int x;
long long int y;
float f;

int main(void)
{

printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu. \n", (unsigned long) sizeof(i));
printf("Size of a long int: %lu. \n", (unsigned long)sizeof(x));
printf("Size of a long long int %lu. \n", (unsigned long)sizeof(y));
printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));
 return(0);
}
