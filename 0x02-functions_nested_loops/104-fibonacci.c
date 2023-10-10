#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

#include <stdio.h>

int main(void)
{
int a = 1, b = 2, next, count;

printf("%d, %d", a, b);

for (count = 3; count <= 98; ++count)
{
next = a + b;
if (next > 0)
printf(", %d", next);
else
printf(", %d", next * -1);
a = b;
b = next;
}

printf("\n");

return (0);
}
