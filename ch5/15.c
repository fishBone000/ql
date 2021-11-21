#include<stdio.h>

double f(double x){
	return 2*x*x*x - 4*x*x + 3*x -6;
}

double k(double x){
	return 6*x*x - 8*x + 3;
}

int main(){
	double x = 1.5;
	while(f(x))
		x -= f(x)/k(x);
	printf("%.2lf", x);
	return 0;
}
