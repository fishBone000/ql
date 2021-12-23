//用函数求出平均分、最高分和最低分 

#include<stdio.h>

void mma(int *list, int *min, int *max, float *average){
	*max=*min=list[0];
	for(int i = 0; i < 10; i++){
		if(*max<list[i])
			*max = list[i];
		if(*min>list[i])
			*min = list[i];
		*average+=list[i];
	}
	*average/=10;
	return;
}

int main(){
	int max, min;
	float average = 0;
	int list[10];
	for(int i = 0; i < 10; i++)
		scanf("%d", list+i);
	mma(list, &min, &max, &average);
	printf("max=%d.00\nmin=%d.00\naverage=%.2f", max, min, average);
	return 0;
}
