#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the addition, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* loop through arguments */
	for (i = 1; i < argc; i++)
	{
		/* check for non-digit characters */
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (printf("Error\n"), 1);
		}

		/* add to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
