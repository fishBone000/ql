#include<stdio.h>

int main(){
	int array[] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
	int in;
	scanf("%d", &in);
	if(in < array[0])
		printf("%d ", in);
	for(int i = 0; i < 10; i++){
		printf("%d ", array[i]);
		if(i != 9)
			if(array[i] <= in && array[i+1] >= in)
				printf("%d ", in);
	}
	if(in > array[9])
		printf("%d ", in);
	return 0;
}
