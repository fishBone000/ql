#include<stdio.h>

int main(){
	double result=0;
	int a = 1, b = 1, c;
	for(int i = 0; i < 20; i++){
		c = a+b;
		a=b;
		b=c;
		result += (double)b/a;
	}
	printf("%lf", result);
	return 0;
}
