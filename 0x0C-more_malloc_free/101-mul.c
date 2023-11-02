#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @result: The buffer to store the result of multiplication.
 */

void multiply(char num1[], char num2[], char result[])
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, carry, temp;

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') +
				   (result[i + j + 1] - '0') + carry;
			carry = temp / 10;
			result[i + j + 1] = (temp % 10) + '0';
		}
		result[i + j + 1] = carry + '0';
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments as strings.
 *
 * Return: 0 on success, 98 and prints "Error" if arguments are incorrect.
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	char result[1000];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	multiply(num1, num2, result);
	printf("%s\n", result);

	return (0);
}

