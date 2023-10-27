/**
 * _islower - Check for lowercase character
 * @c: char
 * Not allowed to use standard libraries
 * Return: 1 if c lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
