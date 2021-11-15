#include<stdio.h>

int main(){
	int in;
	scanf("%d", &in);
	if(in<0)
		printf("Input error!");
	else if(in<60)
		printf("No Pass!");
	else if(in<70)
		printf("Pass!");
	else if(in<80)
		printf("Middle!");
	else if(in<90)
		printf("Good!");
	else if(in<=100)
		printf("Very Good!");
	else
		printf("Input error!");
	return 0;
}
