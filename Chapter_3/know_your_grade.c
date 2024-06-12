#include <stdio.h> 
int main(){
	printf("Please enter the marks you scored in your exam.\n");
	int marks;

	scanf("%d", &marks);

	if (marks >= 90){
		printf("You scored an A.\n");
	}
	else if (marks >= 80){
		printf("You scored an B.\n");
	}
	else if (marks >= 70){
		printf("You scored an C.\n");
	}
	else if (marks >= 60){
		printf("You scored an D.\n");
	}
	else if (marks >= 50){
		printf("You scored an F.\n");
	}
	else
		printf("You failed the exam!\n");

	return 0;
}
