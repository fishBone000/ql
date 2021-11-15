#include<stdio.h>
int main(){
	int input, frst, scnd, thrd;
	scanf("%d", &input);
	frst=input/1000000;
	scnd=input/1000%1000;
	thrd=input%1000;
	printf("%d %d %d", thrd, scnd, frst);
	return 0;
}

