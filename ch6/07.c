#include<stdio.h>

int main(){
	int min, max;
	int list[8];
	for(int i = 0; i < 8; i++){
		scanf("%d", list+i);
	}

	min = max = list[0];
	for(int i = 0; i < 8; i++){
		if(list[i]<min)
			min=list[i];
		if(list[i]>max)
			max=list[i];
	}
	printf("最小值是:%d\n最大值是:%d", min, max);
	return 0;
}
