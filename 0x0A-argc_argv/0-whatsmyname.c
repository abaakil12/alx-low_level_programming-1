#include <stdio.h>

/**
 * main - prints its name
 *@argc: number of arguments passed
 *@argv: array of pointers to the arguments
 *
 *Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

