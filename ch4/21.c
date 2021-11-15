#include<stdio.h>
int main(){
	float a, b, distance; //谁知道前两个变量是什么，题里也没写，直接用就完事了
	scanf("%f %f %f", &a, &b, &distance);
	float fee = a*b; //每公里费用
	if(distance < 250)
		printf("%.2f", fee*distance);
	else if(distance < 500)
		//printf("%.2f", fee*250+(distance-250)*fee*0.98);
		printf("%.2f", fee*0.98*distance);
	else if(distance < 1000)
		//printf("%.2f", fee*250+250*fee*0.98+(distance-500)*fee*0.92);
		printf("%.2f", fee*0.95*distance);
	else if(distance < 2000)
		//printf("%.2f", fee*250+250*fee*0.98+500*fee*0.95+(distance-1000)*fee*0.92);
		printf("%.2f", fee*0.92*distance);
	else if(distance < 3000)
		//printf("%.2f", fee*250+250*fee*0.98+500*fee*0.95+1000*fee*0.92+(distance-2000)*fee*0.9);
		printf("%.2f", fee*0.90*distance);
	else
		//printf("%.2f", fee*250+250*fee*0.98+500*fee*0.95+1000*fee*0.92+1000*fee*0.9+(distance-3000)*fee*0.85);
		printf("%.2f", fee*0.85*distance);
	return 0;
}
