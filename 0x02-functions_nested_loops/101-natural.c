#include "_putchar.c"

void print_number(int n);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

print_number(sum);
_putchar('\n');

return (0);
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}

_putchar(n % 10 + '0');
}

