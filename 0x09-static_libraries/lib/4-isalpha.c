/**
 * _isalpha - Check if a character is alphabetic
 * @c: charcter to be checked
 * Not allowed to use standard libraries
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
