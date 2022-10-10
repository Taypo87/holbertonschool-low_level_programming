#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints arguments passed, one per line
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
