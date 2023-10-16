#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
int length, start, end;
char temp;

length = 0;
start = 0;

while (s[length] != '\0')
length++;

end = length - 1;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
