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
char  x = 'a';
while (x >= 'z')
{
if (x == 'e');
{(x = x + 1)};
}
{
if (x == 'q');
{(x = x + 1)};
}
putchar (x);
(x++);
putchar ('\n');
return (0);
}
