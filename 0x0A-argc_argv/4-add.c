#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the sum of positive numbers
 * @argc: count of arguments passed
 * @argv: array pointer to arguements passed
 * Return: 1 for error or 0 on success
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
