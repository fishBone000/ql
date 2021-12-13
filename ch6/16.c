#include<stdio.h>
#include<stdlib.h>

int length;
#define LENGTH_16 length


void sort(int *list){
	short *flags = (short*)calloc(LENGTH_16, sizeof(short)); // RUBBISH QINGLINE!!!
	int *result = (int*)calloc(LENGTH_16+1, sizeof(int));

	while(1){
		int min, j=-1;
		for(int i = 0; i < LENGTH_16; i++){
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
	free(flags);
	free(result);
	return;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int *listA = (int*)calloc(m, sizeof(int));
	int *listB = (int*)calloc(n, sizeof(int));
	int *reserveA = listA;
	int *reserveB = listB;

	for(int i = 0; i < m; i++)
		scanf("%d", listA+i);
	for(int i = 0; i < n; i++)
		scanf("%d", listB+i);

	if(m>n){
		int *p_temp, temp;
		p_temp = listA;
		temp = m;
		listA = listB;
		m = n;
		listB = p_temp;
		n = temp;
	}

	int *result = (int*)calloc(m+1, sizeof(int));

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(listA[i] == listB[j])
				result[++result[0]] = listA[i];
	LENGTH_16 = result[0];
	if(!LENGTH_16)
		goto end;
	sort(result+1);
	for(int i = 0; i < LENGTH_16; i++){
		int element = result[i+1];
		fprintf(stdout, "%d ", element);
	}
	end: free(reserveA);
	     free(reserveB);
	     free(result);
	return 0;
}
