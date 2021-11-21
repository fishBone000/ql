#include<stdio.h>

int main(){
	for(int i = 100; i < 1000; i++){
		int frst = i/100, sec = i/10%10, thrd = i%10;
		if(i == frst*frst*frst + sec*sec*sec + thrd*thrd*thrd)
			printf("%d ", i);
	}
	return 0;
}
