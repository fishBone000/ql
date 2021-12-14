#include<stdio.h>
#include<string.h>

int main(){
	char *strA, *strB;
	scanf("%ms %ms", &strA, &strB);
	printf("result:%d", strcmp(strA, strB));
	return 0;
}
