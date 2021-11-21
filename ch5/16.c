#include<stdio.h>

double f(double x){
	return 2*x*x*x - 4*x*x + 3*x -6;
}

int main(){
	double a = -10, mid, b = 10;
	do{
		mid = (a+b)/2;
		if(f(a)>0 && f(mid)>0 || f(a)<0 && f(mid)<0)
			a = mid;
		else
			b = mid;
	}while(f(mid));
	printf("x=%.2lf", mid);
	return 0;
}
