// 用函数求两数之和

#include<stdio.h>

float plus(float a, float b){
	return a+b;
}

int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.2f", plus(a, b));
	return 0;
}
