#include<stdio.h>

int main(){
	int a = 1, b = 1, c = 1;
	do{
		if( a!=b && b!=c && a!=c)
			printf("%d ", a*100+b*10+c);

		if(c == 4){
			if(b == 4){
				a++;
				b = 1;
			}else
				b++;

			c = 1;
		}else
			c++;
	}while(a!=5 && b!=5 && c!=5);

	return 0;
}
