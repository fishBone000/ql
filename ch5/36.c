#include<stdio.h>

int main(){
	int x, a, result;
	scanf("%d %d", &x, &a);
	result = x;
	for(int i = 1; i < a; i++)
		result = result*x%1000;
	printf("%d", result);
	return 0;
}
