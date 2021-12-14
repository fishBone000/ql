#include<stdio.h>

int main(){
	int list[10] = {0}, count=0;
	for(int i = 0; i < 10; i++)
		scanf("%d", list+i);

	for(int i = 0; i < 10; i++){
		short flag = 0;
		for(int j = 0; j < i; j++)
			if(flag = list[i] == list[j])
				break;
		if(!flag)
			count++;
	}
	printf("%d", count);
	return 0;
}
