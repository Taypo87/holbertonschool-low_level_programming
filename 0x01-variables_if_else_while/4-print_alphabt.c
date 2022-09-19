/*
 * File - 4-print_alphabt.c
 * Author: Taylor Poczynek
 */
#include <stdio.h>
/**
* main - prints all letters but e and q
* Return: 0
*/
int main(void)
{
char  x ;
for (x = 'a'; x <= 'z'; x++)
{ if (x != 'e' && x != 'q')
putchar(x);}
putchar ('\n');
return (0);
}
