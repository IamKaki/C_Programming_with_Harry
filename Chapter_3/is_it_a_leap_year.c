#include <stdio.h>
int main(){
	printf("Enter a year to determine if its a leap year or not.\n");

	int year;
	scanf("%d", &year);

	if (year % 4 == 0){
		printf("This is a leap year.\n");
	}
	else if (year % 100 == 0 && year % 400 == 0){
		printf("This is a leap year.\n");
	}
	else
		printf("The year entered is not a leap year.\n");

	return 0;
}
