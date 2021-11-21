#include<stdio.h>

int main(){
	int a, b, c, d, count=0;
	for(a=2; a+0-5+8<=30; a++)
		for(b=0; a+b-5+8 <= 30; b++)
			for(c=-5; a+b+c+8 <= 30; c++)
				for(d=8; ;d++)
					if(a+b+c+d==30){
						count++;
						break;
					}

	printf("%d", count);
	return 0;
}
