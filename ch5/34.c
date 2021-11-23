#include<stdio.h>

int main(){
	int i = 0;
	while(1){  // RUBBISH QINGLINE!!!!!!!!!!!!
		i+=4;
		int tmp = i;
		short cont = 0;
		for(int j = 0; j < 5; j++){
			tmp = tmp/4*5+1;
			if(j!=4 && tmp%4){
				cont = 1;
				break;
			}
		}
		if(cont)
			continue;
		printf("%d", tmp);
		break;
	}
	return 0;
}
