#include <stdio.h>
#include <stdlib.h>
int isinteger(char *ptr);
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: Alwyas 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0 || isinteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * isinteger - checks argument if its an integer
 * @ptr: pointer to argv
 * Return: 1 if ptr is not an int, 0 Otherwise.
 */
int isinteger(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] < 48 || ptr[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}
