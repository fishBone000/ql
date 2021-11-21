#include<stdio.h>

int main(){
	int score, sum=0, min=10, max=0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &score);
		sum+=score;
		if(score<min)
			min=score;
		if(score>max)
			max=score;
	}
	sum -= min;
	sum -= max;
	printf("%.2lf", (double)sum/8);
	return 0;
}
