#include<stdio.h>

int main(){
	int in, sum=0;
	scanf("%d", &in);
	for(int i = 1; i*2 <= in; i++)
		sum += i*2;
	printf("%d", sum);
	return 0;
}
