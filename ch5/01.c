#include<stdio.h>

int main(){
	double result=0, step=1;
	int i=1;
	do{
		if(!(i%2))
			step=-step;
		result += step;
		step = (double)1/(2*++i-1);
	}while(step>=0.000001);
	printf("%lf", result*4);
	return 0;
}
