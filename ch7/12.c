//求多项式
#include<stdio.h>

int p(int n, int x){
	switch(n){
		case 0:
			return 1;
		case 1:
			return x;
		default:
			return (2*n-1)*p(n-1, x)-(n-1)*p(n-2, x)/n;
	}
}

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	printf("%d", p(n, x));
	return 0;
}
