#include<stdio.h>

int main(){
	float input;
	int integer, count=0;
	scanf("%f", &input);
	integer = input;
	while(integer){
		integer/=10;
		count++;
	}
	printf("%d", count);
	return 0;
}
