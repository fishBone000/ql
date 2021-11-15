#include<stdio.h>

int get_distance(int min){
	min-=30;
	int result;
	if(min<=10)
		result = 100*min;
	else if(min <= 20)
		result = 1000+(min-10)*150;
	else
		result = 1000+1500+(min-20)*50;
	return result;
}

int main(){
	int hr1, min1, hr2, min2;
	scanf("%d:%d %d:%d", &hr1, &min1, &hr2, &min2);
	if(hr1==8)
		min1=60;
	if(hr2==8)
		min2=60;
	printf("%d米", get_distance(min2)-get_distance(min1));
	return 0;
}
