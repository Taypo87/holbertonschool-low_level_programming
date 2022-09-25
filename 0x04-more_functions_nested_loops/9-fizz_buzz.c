#include <stdio.h>
/**
 * main - prints 1-100 fizz for 3 buzz for 5 fizbuzz for 15
 * Return: 0
 */
int main(void)
{
int n = 1;
while (n <= 99)
{
if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else if ((n % 5) == 0)
{
printf("Buzz ");
}
else if ((n % 3) == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", n);
}
n++;
}
printf("Buzz");
printf("\n");
return (0);
}
