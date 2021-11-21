#include<stdio.h>

int main(){
	int i = 0;
	for(; i%5!=1 || i%6!=5 || i%7!=4 || i%11!=10; i++);
	printf("%d", i);
	return 0;
}
