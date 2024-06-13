#include <stdio.h>
int main() {
	printf("Please enter a number to print natural numbers upto, from 1.\n");

	int i = 1, k;
	scanf("%d", &k);

	//for (i = 1 ; i < 11 ; i++) {
	//	printf("%d", i);
//	}
	if (k < i){
		printf("%d", k);
		k++;
	}

	return 0;
}
