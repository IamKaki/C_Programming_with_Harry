#include <stdio.h>

/**
 * main - get input from users then calculate area of rectangle
 * Return: 0
 **/

int main(void)
{
	int h, w;

	/*prompt and read height and width*/
	printf("Please input the height..\n");
	scanf("%d", &h);

	printf("Please input the width..\n");
	scanf("%d", &w);

	int area = h * w;

	/*output the resulst of the area*/
	printf("The area of the rectangle is %d.\n", area);

	return (0);
}
