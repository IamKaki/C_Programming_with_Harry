#include <stdio.h>

int sum (int, int, int);

int main(){
	int a = 10, b = 12, c = 34;

	printf("The sum of a and b is %d\n", sum (a, b, c));
	printf("The value of c is %d\n", c);
	printf("The value of a and c is %d\n", sum (a, b, c));
	return 0;
}

int sum (int a, int b, int c){
	c = 36;
	
	return a + b + c;
}
