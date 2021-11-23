#include<stdio.h>
#include<math.h>

int digit(int value, int pos){
	return value/(int)pow(10, pos-1)%10;
}

int main(){
	for(int i = 10; i <= 1000; i++){
		int count = 0, tmp;
		for(tmp = i; tmp>0; count++)
			tmp/=10;

		short cont = 0;
		for(tmp = 1; tmp <= (count+1)/2; tmp++)
			if( digit(i, tmp) != digit(i, count+1-tmp) ){
				cont = 1;
				break;
			}
		if(cont)
			continue;
		printf("%d ", i);
	}
	return 0;
}
