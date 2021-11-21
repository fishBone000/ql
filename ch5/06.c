#include<stdio.h>

int main(){
	int a=1, b=0, c;
	for(int i = 0; i < 42; i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d", b);
	return 0;
}
