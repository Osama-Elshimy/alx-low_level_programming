#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
unsigned long fib1 = 1, fib2 = 2, temp;
int count = 2;

printf("%lu, %lu", fib1, fib2);

while (count < 98)
{
temp = fib2;
fib2 = fib1 + fib2;
fib1 = temp;

printf(", %lu", fib2);

count++;
}

printf("\n");

return (0);
}

