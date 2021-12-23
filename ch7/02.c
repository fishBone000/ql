//编写函数求圆锥体体积

#include<stdio.h>

double areaT(double r, double h){
	return h*3.14*r*r/3;
}

int main(){
	double r, h;
	scanf("%lf %lf", &r, &h);
	printf("%.2lf", areaT(r, h));
	return 0;
}
