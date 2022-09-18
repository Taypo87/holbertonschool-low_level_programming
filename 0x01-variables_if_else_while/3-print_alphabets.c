/*
*  File - 3-print_alphabets.c
*  Author: Taylor Poczynek
*/
#include <stdio.h>
/**
* main - prints alphabet from a to z lower and uppercase
* Return: 0
*/
int main(void)
{
char x;
x = 'a';
while (x <= 'z')
{putchar (x);
(x++);
}
x = 'A';
while (x <= 'Z')
{putchar (x);
(x++);
}
putchar ('\n');
return (0);
}
