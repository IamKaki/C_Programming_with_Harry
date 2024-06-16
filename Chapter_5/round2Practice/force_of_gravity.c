#include <stdio.h>

float gravity(int);

int main(){
	int m;

	printf("Enter the mass of the object to calculate the force of gravity acting on it.\n");

	scanf("%d", &m);

	printf("The force of gravity acting on an object of mass %d is %lf\n", m, gravity(m));

	return 0;
}

float gravity(int m){

	return 9.8 * m;
}
