#include <stdio.h>

double average(int, int, int);

int main(){
	int a, b, c;

	printf("Enter three numbers to calculate their avearge.\n");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("The avaerage of the 3 numbers entered is %lf\n", average(a, b, c));

	return 0;
}

double average(int a, int b, int c){
	
	return (a + b + c)/3.0;
}
