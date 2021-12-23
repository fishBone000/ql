//编程计算1!+2!+3!+ …+10!的值。 

#include<stdio.h>

int fact(int n){
	int result = 1;
	while(n>=1)
		result *= n--;
	return result;
}

int main(){
	int result = 0;
	for(int i = 1; i <= 10; i++)
		result += fact(i);
	printf("%d", result);
	return 0;
}
