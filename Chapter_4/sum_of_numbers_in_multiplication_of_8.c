#include <stdio.h>
int main() {
	int i, sum = 0;

	for (i = 1; i <= 10; i++){
		sum += i * 8;
		}
		
	printf("The total sum of the multiplication table of 8 is %d.\n", sum);

	return 0;
}
