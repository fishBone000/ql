#include<stdio.h>

int main(){
	int score;
	scanf("%d", &score);
	if(score<60)
		printf("E");
	else if(score<70)
		printf("D");
	else if(score<80)
		printf("C");
	else if(score<90)
		printf("B");
	else
		printf("A");
	return 0;
}
