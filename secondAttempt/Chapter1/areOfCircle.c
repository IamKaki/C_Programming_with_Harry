#include <stdio.h>

/**
 * main - calculate area of circle or volume of cyclinder
 * Return: 0
 **/

int main(void)
{
	int r = 30;
	/* formula for area of circle */
	int area = 3.14 * r * r;
	int h = 78;
	/* formula for volume of cylinder */
	int volume = 3.14 * r * r * h;

	/* output for area of circle */
	printf("The area of a circle with a radius of 30cm is %d.\n", area);

	/* output for voulme of cylinder */
	printf("The volume of a cyliner with a height of 78");
	printf(" and radius of 30 is %d.\n", volume);

	return (0);
}
