#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		return (printf("Error\n"), 1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
