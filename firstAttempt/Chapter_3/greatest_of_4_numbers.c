#include <stdio.h>
int main(){
	printf("Enter four numbers please.\n");
	int a, b, c, d;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	if (a > b && a > c && a > d){
		printf("%d is the greatest.\n", a);
	}
	if (b > a && b > c && b > d){
		printf("%d is the greatest.\n", b);
	}
	if (c > b && c > a && c > d){
		printf("%d is the greatest.\n", c);
	}
	else 
		printf("%d is the greatest.\n", d);

	return 0;
}
