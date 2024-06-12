#include <stdio.h>
int main() {
	printf("Please enter a number to know if it is divisible by 97 or not.\n");
	int num;
	scanf("%d", &num);

	if (num%97 == 0){
		printf("Your number is divisible by 97.\n");
	}
	else
		printf("The number you entered is not disible by 97.\n");

	return 0;
}
