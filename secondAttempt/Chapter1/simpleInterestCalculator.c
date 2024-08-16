#include <stdio.h>

/**
 * main - calculates the simple interest
 *
 * formula: p*r*t
 *
 * Return: 0 successful
 */

int main(void)
{
	int principle, time;
	float rate;

	/* prompt for and save the original balance or principal amount */
	printf("Please enter the principle amount..\n");
	scanf("%d", &principle);

	/* prompt for and save the rate for loan already converted over 100 */
	printf("Please enter the rate in decimal format..\n");
	scanf("%f", &rate);

	/* prompmt and save time in years */
	printf("Please enter the time in years..\n");
	scanf("%d", &time);

	float si = principle * rate * time;

	printf("The simple interest for your loan is %.2f.\n", si);

	return (0);
}
