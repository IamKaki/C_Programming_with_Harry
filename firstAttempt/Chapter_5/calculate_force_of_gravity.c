#include <stdio.h>

double gravity(int);

int main(){
	int mass;
	printf("Enter the mass of the object.\n");

	scanf("%d", &mass);

	printf("The force of gravity on the object is %lf", gravity(mass));
	return 0;
}

double gravity(int mass){
	return mass * 9.8;
}
