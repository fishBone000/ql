#include<stdio.h>

int main(){
	int in, sum=0;
	scanf("%d", &in);
	while(in>0){
		sum*=10;
		sum+=in%10;
		in/=10;
	}
	printf("%d", sum);
	return 0;
}
