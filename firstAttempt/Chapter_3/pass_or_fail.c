#include <stdio.h>
int main(){
	printf("Please enter your marks for English, Kiswahili, and Math.\n");
	int E, K, M;

	scanf("%d", &E);
	scanf("%d", &K);
	scanf("%d", &M);

	int Total = E + K + M;

	if (Total >= 40 && E >= 33 && K >= 33 && M >= 33){
		printf("Congrats! You have passes the exam.\n");
	}
	else if (E < 33 || K < 33 || M < 33){
		printf("You failled the exam, one of your subjects was below the requirement.\n");
	}

	return 0;
}
