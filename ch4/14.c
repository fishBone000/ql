#include<stdio.h>

int main(){
	int dH, T, dS;
	scanf("%d %d %d", &dH, &T, &dS);
	if(dH-T*dS<0)
		printf("Yes");
	else
		printf("No");
	return 0;
}
