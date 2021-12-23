//求方程根
#include<stdio.h>
#include<math.h>

void greater_0(double a, double b, double c){
	printf("x1=%lf x2=%lf", (-b+sqrt(b*b-4*a*c))/(2*a), (-b-sqrt(b*b-4*a*c))/(2*a));
	return;
}

void equals_0(double a, double b, double c){
	printf("x1=%lf x2=%lf", -b/(2*a), -b/(2*a));
	return;
}

void less_0(double a, double b, double c){
	if(a<0){
		a = -a;
		b = -b;
		c = -c;
	}
	printf("x1=%lf+%lfi x2=%lf%lfi", -b/(2*a), sqrt(4*a*c-b*b)/(2*a), -b/(2*a), -sqrt(4*a*c-b*b)/(2*a));
	return;
}

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b*b-4*a*c;
	if(delta > 0)
		greater_0(a, b, c);
	else if(delta == 0)
		equals_0(a, b, c);
	else
		less_0(a, b, c);
	return 0;
}
