#include <stdio.h>
int main() {
	printf("Please enter a number to check.\n");

	int i;
	scanf("%d", &i);

	if (i / i == 1 && i / 1 == i)
			printf("It is a prime number.\n");
	
	else if (i % 2 != 0)
		printf("It is not a prime number.\n");

	return 0;
}
