#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c)
		printf("你输入的三角形的三条边构成了一个等边三角形！");
	else if(a==b || a==c || b==c)
		printf("你输入的三角形的三条边构成了一个等腰三角形！");
	else
		printf("你输入的三角形的三条边构成了一个一般三角形！");
	return 0;
}
