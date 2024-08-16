#include <stdio.h>

/**
 * main - checks if a number is divisible by 97
 *
 * Return: 0 successful
 */

int main(void)
{
	int j;

	/* prompt for number and save it for divisibility */
	printf("Please enter a whole number to check if it is divisible by 97.\n");
	scanf("%d", &j);

	/* check if number is divisible and give output*/
	if (j % 97 == 0)
		printf("%d is divisible by 97.\n", j);

	/* output if number is not divisible */
	else
		printf("%d is not divisible by 97.\n", j);

	return (0);
}
