#include<stdio.h>

int main(){
	int in, max = 0, count = 0;
	while(1){
		scanf("%d", &in);
		if(in == -1)
			break;
		if(in > max){
			count = 0;
			max = in;
		}
		if(in == max)
			count++;
	}
	printf("max=%d count=%d", max, count);
	return 0;
}
