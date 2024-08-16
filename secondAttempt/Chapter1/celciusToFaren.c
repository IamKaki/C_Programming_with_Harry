#include <stdio.h>

/**
 * main - converts celcius to farenheight
 * formula: (0°C × 9/5) + 32 = 32°F
 *
 * Return: 0 successful
 */

int main(void)
{
	int c;

	/* prompt for and save the value of degrees */
	printf("Please enter the degrees to convert..\n");
	scanf("%d", &c);

	/* the formula for converting degrees to farenheight */
	float f = (c * (9.0 / 5.0)) + 32;

	/* output the results of the conversion */
	printf("Your degrees in farenheight are %.1f.\n", f);

	return (0);
}
