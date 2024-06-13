#include <stdio.h>
int main() {
	for (int i = 0 ; i < 40 ; i++){
		if (i == 34){
			break;
		}
		printf("The value of i is %d.\n", i);
	}

	return 0;
}
