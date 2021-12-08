#define LENGTH 10
#include<stdio.h>

int main(){
	int list[LENGTH] = {1,12,4,9,10,22,-7,0,99,8};
	short flags[LENGTH] = {0}; // RUBBISH QINGLINE!!!
	int result [LENGTH+1] = {1};

	while(1){
		int min, j=-1;
		for(int i = 0; i < LENGTH; i++){
			if(flags[i])
				continue;
			if(j==-1 || list[i] < min)
				min = list[j=i];
		}
		if(j == -1)
			break;
		flags[j] = 1;
		result[result[0]++] = min;
	}
	for(int i = 0; i < LENGTH; i++)
		printf("%d ", result[i+1]);
	return 0;
}
