#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<b)
		printf("%.2f %.2f", (float)a, (float)b);
	else
		printf("%.2f %.2f", (float)b, (float)a);
	return 0;
}
