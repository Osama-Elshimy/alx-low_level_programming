/**
 * _strcmp - Compare two strings s1 and s2
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal,
 * -15 if s1 is less than s2, 15 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
int s1_length, s2_length;

s1_length = 0;
s2_length = 0;

while (s1[s1_length] != '\0')
s1_length++;

while (s2[s2_length] != '\0')
s2_length++;

if (s1_length > s2_length)
return (15);
else if (s2_length > s1_length)
return (-15);

else
return (0);
}

