#include<stdio.h>

int main(){
	int cnt;
	for(int i = 1; i < 1001; i++){
		cnt = 0;
		int list[1024] = {0};
		int index = 0;
		for(int j = 1; j < i; j++)
			if(i%j == 0){
				cnt += j;
				list[index++] = j;
			}

		if(cnt == i){
			printf("%d,its factors are ", i);
			for(int j = 0; j < index; j++)
				printf("%d ", list[j]);
			putchar('\n');
		}
	}
	return 0;
}
