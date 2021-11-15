#include<stdio.h>
int main(){
	int mass, init, final;
	scanf("%d %d %d", &mass, &init, &final);
	printf("%.2f焦耳", (float)mass*(final-init)*4184);
	return 0;
}
