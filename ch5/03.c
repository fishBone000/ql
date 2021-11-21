#include<stdio.h>
#include<math.h>

int main(){
	double result=0;
	int in;
	for(int i = 0; i < 15; i++){
		scanf("%d", &in);
		result = sqrt(in+result);
	}
	printf("%.2lf", result);
	return 0;
}
