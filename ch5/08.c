#include<stdio.h>
#include<stdlib.h>

int main(){
	int start, end, count;
	scanf("%d %d", &start, &end);
	count = end-start+1;
	int *fac_cnt_list = (int*)malloc(sizeof(int)*count);
	for(int i = 0; start+i <= end; i++){
		fac_cnt_list[i] = 0;
		for(int j = 1; j < start+i; j++)
			if((start+i)%j == 0)
				fac_cnt_list[i] += j;
	}

	for(int i = 0; i < count-1; i++)
		for(int j = i+1; j < count; j++)
			if(fac_cnt_list[i] == fac_cnt_list[j])
				printf("%d %d\n", start+i, start+j);

	return 0;
}
