#include <stdio.h>

float convert(int);

int main(){
	int c;
	printf("Enter degeree to convert to farenheit.\n");

	scanf("%d", &c);

	printf("%d degerees in farenheit is %lf\n", c, convert(c));

	return 0;
}

float convert(int c){
	//(0°C × 9/5) + 32 = 32°F
	return (c * 9.0/5.0) + 32;
} 
