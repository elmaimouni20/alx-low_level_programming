#include "main.h"

/**
 * error_exit - prints an error message and exits the program
 * with a status of 98.
 */

void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_valid_num - checks if a string represents a valid number
 * (composed of digits only).
 *
 * @str: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */

int is_valid_num(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		return (1);
	}
}

/**
 * _atoi - converts a string to an integer.
 *
 * @s: the string to convert
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int sign, result, max_result, max_digit;

	sign = 1;
	result = 0;
	max_result = INT_MAX / 10;
	max_digit = INT_MAX % 10;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (result > max_result || (result == max_result && (*s - '0') > max_digit))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
			break;
		s++;
	}
	return (result * sign);
}

/**
 * main - the main function of the program.
 *
 * It multiplies two positive integers passed
 * as arguments and prints the result.
 *
 * If the number of arguments is incorrect or
 * the arguments are not valid integers,
 * an error message is printed and the program exits with a status of 98.
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit();

	if (!is_valid_num(argv[1]) || !is_valid_num(argv[2]))
		error_exit();

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
