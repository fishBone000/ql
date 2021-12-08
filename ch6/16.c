#include<stdio.h>

int length;
#define LENGTH length


void sort(int *list){
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
	return;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int listA[m], listB[n];

	for(int i = 0; i < m; i++)
		scanf("%d", listA+i);
	for(int i = 0; i < n; i++)
		scanf("%d", listB+i);

	if(m>n){
		int *p_temp, temp;
		p_temp = listA;
		temp = m;
		listA = (int*)listB;
		m = n;
		listB = p_temp;
		n = temp;
	}

	int result[m+1] = {0};

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(listA[i] == listB[i])
				result[++result[0]] = listA[m];
	LENGTH = result[0];
	if(!LENGTH)
		return 0;
	sort(result+1);
	for(int i = 0; i < LENGTH; i++)
		printf("%d ", result[i+1]);
	return 0;
}
