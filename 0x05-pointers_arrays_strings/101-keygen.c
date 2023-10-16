#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme
 * Return: A randomly generated password
 */
char *generate_password(void)
{
static char password[11];
const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
int i;

srand(time(0));

for (i = 0; i < 10; i++)
{
password[i] = charset[rand() % (sizeof(charset) - 1)];
}

password[10] = '\0';

return (password);
}

/**
  * main - entry function
  * Return: Always 0
  */
int main(void)
{
char *password = generate_password();
printf("Generated Password: %s\n", password);
return (0);
}

