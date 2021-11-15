#include<stdio.h>

int main(){
	int in[5]={0};
	scanf("%d %d %d %d %d", in, in+1, in+2, in+3, in+4);
	for(int i = 0; i < 4; i++){
		if(in[i+1]<in[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}
