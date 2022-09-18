/*
*  File - 2-print_alphabet
*  Author: Taylor Poczynek
*/
#include <stdio.h>
/**
* main - prints alphabet
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
putchar ('\n');
return (0);
}
