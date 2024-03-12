#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money, followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, cents, coins = 0;
	int denominations[5];
	int num_denominations;

	/* check for correct number of arguments */
	if (argc != 2)
		return (printf("Error\n"), 1);

	/* convert cents to integer */
	cents = atoi(argv[1]);

	/* check for negative cents */
	if (cents < 0)
		return (printf("0\n"), 0);

	/* initialize denominations array */
	denominations[0] = 25;
	denominations[1] = 10;
	denominations[2] = 5;
	denominations[3] = 2;
	denominations[4] = 1;

	/* calculate the size of the array */
	num_denominations = sizeof(denominations) / sizeof(int);

	/* calculate the number of coins */
	for (i = 0; i < num_denominations && cents; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", coins);
	return (0);
}
