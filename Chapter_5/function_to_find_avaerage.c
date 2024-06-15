#include <stdio.h>

double average(int, int, int);

int main(){
	
	int a, b, c;
	printf("Enter the three numbers you want to find the average.\n");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("The average of the three numbers is %lf\n", average(a, b, c));

	return 0;
}

double average(int a, int b, int c){
	return  (a + b + c)/3.0;
}

