#include<stdio.h>

int main(){
	int hr, min, total;
	scanf("%d:%d", &hr, &min);
	float result = (hr+(float)min/60)*30-min*6;
	if(result<0)
		result=-result;
	if(result>180)
		result=360-result;
	printf("%.2f", result);
	return 0;
}
