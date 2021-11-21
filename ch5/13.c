#define TIMES 10
#include<stdio.h>

int main(){
	double total=-100, height=100;
	for(int i = 0; i < TIMES; i++){
		total += 2*height;
		height /= 2;
	}
	printf("第%d次落地时共经过%lf米\n第%d次反弹%lf米", TIMES, total, TIMES, height);
	return 0;
}
