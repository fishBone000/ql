//计算函数

#include<stdio.h>

int fac(int n){
	if(n == 1)
		return 1;
	return n*fac(n-1);
}

/*
int fac(int n){
	int result = 1;
	for(; n >= 1; result *= n--);
	return result;
}
*/

int cmk(int m, int k){
	return fac(m)/(fac(k)*fac(m-k));
}

int main(){
	int m, k;
	scanf("%d %d", &m, &k);
	printf("%d", cmk(m, k));
	return 0;
}
