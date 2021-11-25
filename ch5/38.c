#include<stdio.h>
#include<math.h>

int main(){
	int a, n, result=0;
	scanf("%d %d", &a, &n);
	for(int i = 1; i <= n; i++)
		result += (n+1-i)*pow(10, i-1)*a;
	printf("%d", result);
	return 0;
}
