#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multplies two numbers, which are passed as arguments
 * @argc: argument count
 * @argv: arguments
 * Return: 1 for an error, 0 for success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
