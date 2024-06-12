#include <stdio.h>
int main(){
	printf("Please enter a character.\n");
	char c;

	scanf("%c", &c);

	if (c >= 97 && c <= 122){
		printf("The character entered is a lowercase character.\n");
	}
	else if (c >= 65 && c <= 90){
		printf("The character entered is an uppercase character.\n");
	}
	else
		printf("The character enetered is not an alphabetical character.\n");
}
