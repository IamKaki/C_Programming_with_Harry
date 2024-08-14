#include <stdio.h>

void goodMorning();

void goodAfternoon();

void goodNight();

int main() {
	goodMorning();
	goodMorning();
	goodAfternoon();
	goodAfternoon();
	goodNight();
	goodNight();

	return 0;
}

void goodMorning(){
	printf("Good Morning Sir Kaki?\n");
	printf("Do your best this day to make it better than the past.\n");
	printf("\n");
}

void goodAfternoon(){
	printf("Good Afternoon Mr. Kaki?\n");
	printf("I hope all is going well so far, Keep up the good work.\n");
	printf("\n");
}

void goodNight(){
	printf("Have a good night Sir Kaki, rest easy.\n");
	printf("Remember to pray and give thanks when you safely get to bed.\n");
	printf("\n");
}
