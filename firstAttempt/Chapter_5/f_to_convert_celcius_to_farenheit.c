#include <stdio.h>
//(0°C × 9/5) + 32 = 32°F

double convert(int);

int main(){
	int c;
	printf("Enter the degrees to convert.\n");

	scanf("%d", &c);

	printf("The value of %d in fahrenheit is %lf\n", c, convert(c));

	return 0;
}

double convert(int c){
	return (c * 9.0/5.0) + 32;
}
