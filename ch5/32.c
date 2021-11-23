#include<stdio.h>

int main(){
	int count = 0;
	int five = 0, two = 0, one = 100;
	while(1){
		count++;

		two++;
		one = 100 - five*5 - two*2;
		if(one < 0){
			five++;
			two = 0;
			one = 100 - five*5 - two*2;
			if(one < 0)
				break;
		}
	}
	printf("%d", count);
	return 0;
}
