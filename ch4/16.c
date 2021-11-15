#include<stdio.h>

int main(){
	float rate;
	int income;
	float tax;
	scanf("%d", &income);
	if(income<=1000)
		tax=0;
	else if(income<=2000)
		tax=(income-1000)*0.05;
	else if(income<=3000)
		tax=1000*0.05+(income-2000)*0.1;
	else if(income<=6000)
		tax=1000*0.05+1000*0.1+(income-3000)*0.15;
	else
		tax=1000*0.05+1000*0.1+3000*0.15+(income-6000)*0.2;
	printf("个人所得税=%.1f 实际报酬=%.2f", tax, income-tax);
	return 0;
}
