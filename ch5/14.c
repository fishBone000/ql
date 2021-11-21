#include<stdio.h>

int main(){
	int total = 1;
	for(int i = 0; i < 10-1; i++)
		total = (total+1)*2;
	printf("%d", total);
	return 0;
}
