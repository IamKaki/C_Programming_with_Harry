#include <stdio.h>
int main(){
	printf("Enter the height.\n");
	
	int height;
	scanf("%d", &height);

	printf("Enter the length.\n");

	int length;
	scanf("%d", &length);

	int area = height * length;
	printf("The area of the rectangle is %d.\n", area);

	return 0;
}
