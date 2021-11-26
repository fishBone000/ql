#include<stdio.h>

int main(){
	int value[3] = {1, 1};
	for(int i = 0; i < 20; i++){
		printf("%d ", value[0]);
		value[2] = value[0] + value[1];
		value[0]=value[1];
		value[1]=value[2];
	}
	return 0;
}
