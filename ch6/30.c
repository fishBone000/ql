#include<stdio.h>
#define LENGTH 10

int main(){
	int list[LENGTH];
	short flags[LENGTH] = {0};
	for(int i = 0; i < LENGTH; i++)
		scanf("%d", list+i);
	for(int i = LENGTH-1; i > 0; i--)
		for(int j = 0; j < i; j++)
			if(list[i] == list[j]){
				flags[i] = 1;
				break;
			}
	for(int i = 0; i < LENGTH; i++){
		if(flags[i])
			continue;
		printf("%d ", list[i]);
	}
	return 0;
}
