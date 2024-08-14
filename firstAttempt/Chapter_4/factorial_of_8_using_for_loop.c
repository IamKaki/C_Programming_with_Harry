#include <stdio.h>
int main() {
	int i, facto = 1;

	for(i = 1; i <= 8; i++){
		facto *= i;
	}
	
	printf("The factorial of 8 is %d\n", facto);

	return 0;
}
