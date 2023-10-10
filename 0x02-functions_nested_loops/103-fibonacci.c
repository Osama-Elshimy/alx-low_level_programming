#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
long fib1 = 1, fib2 = 2, even_sum = 0, temp;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
even_sum += fib2;
}

temp = fib1;
fib1 = fib2;
fib2 += temp;
}

printf("%ld\n", even_sum);

return (0);
}
