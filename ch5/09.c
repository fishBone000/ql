#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int c = b;
		b = a;
		a = c;
	}

	int c;
	for(c = a; c > 0; c--)
		if(a%c == 0 && b%c == 0){
			printf("最大公约数:%d\n", c);
			break;
		}

	for(c = 1; c*b%a != 0; c++);
	printf("最小公倍数:%d", c*b);
	
	return 0;
}
