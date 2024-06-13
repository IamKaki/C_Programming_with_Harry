#include <stdio.h>
int main() {
	for (int i = 0 ; i < 40; i++){
		if (i == 33 || i == 23){
			continue;
		}
		printf("The value of i is %d\n", i);
	}

	return 0;
}
