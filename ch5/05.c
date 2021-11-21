#include<stdio.h>

int main(){
	int i = 100;
	for(; i<201; i++)
		if(i%3)
			printf("%d  ", i);
	return 0;
}
