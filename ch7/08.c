//求两个整数的最大公约数和最小公倍数

#include<stdio.h>

int gcd(int a, int b){
	int gcd = a>b?b:a;
	for(; a%gcd!=0||b%gcd!=0; gcd--);
	return gcd;
}

int lcm(int a, int b){
	int lcm = a>b?a:b;
	while(lcm%a || lcm%b)
		lcm += a>b?a:b;
	return lcm;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("hcf=%d\nlcd=%d", gcd(a, b), lcm(a, b));
	return 0;
}
