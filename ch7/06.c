//计算平均成绩
//What's the point of it??
//直接拿上一节的代码用好了

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
	printf("%.2f", average);
	return 0;
}
