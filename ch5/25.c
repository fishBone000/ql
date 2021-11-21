#include<stdio.h>

int main(){
	int a = -3, b = 5, c;
	for(int i = 1; i < 21; i++){
		if(i%2)
			c = a+b;
		else
			c = a-b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	return 0;
}
