#include<stdio.h>
void swap(int *p, int *q){
	int tmp=*q;
	*q=*p;
	*p=tmp;
	return;
}

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int flag;
	do{
		flag=0;
		if(a>b){
			swap(&a, &b);
			flag=1;
		}
		if(b>c){
			swap(&b, &c);
			flag=1;
		}
	}while(flag);
	printf("%d %d %d", a, b, c);
	return 0;
}
