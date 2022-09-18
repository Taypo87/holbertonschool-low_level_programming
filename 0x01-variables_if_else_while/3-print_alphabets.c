/*
*  File - 3-print_alphabets.c
*  Author: Taylor Poczynek
*/
#include <stdio.h>
int main(void)
{
/**
*   main - displays alphabet in lower and uppercase
*   Return: 0
*/
char x;
char y;
x = 'a';
y = 'A';
while (x <= 'z')
{putchar (x);
(x++);
}
while (y <= 'Z')
{putchar (y);
(y++);
}
putchar ('\n');
return (0);
}
