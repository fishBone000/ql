#include<stdio.h>

int main(){
	int list[] = {87,78,69,79,98,86,91,75,71,95};
	int index = 0;
	for(int i = 0; i < 10; i++)
		if(list[i] < list[index])
			index = i;
	int temp = list[0];
	list[0] = list[index];
	list[index] = temp;
	printf("Min=a[%d]=%d\n", index, list[0]);
	for(int i = 0; i < 10; i++)
		printf("%d ", list[i]);
	return 0;
}
