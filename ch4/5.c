#include<stdio.h>

int main(){
	int input;
	scanf("%d", &input);
	if(input%5==0 && input%7==0)
		printf("Yes");
	else
		printf("No");
	return 0;
}
