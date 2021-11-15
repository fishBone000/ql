#include<stdio.h>

int main(){
	int in;
	scanf("%d", &in);
	if(in<1)
		printf("y=x=%d", in);
	else if(in>=1 && in<10)
		printf("y=2*x-1=%d", 2*in-1);
	else
		printf("y=3*x-11=%d", 3*in-11);
	return 0;
}
