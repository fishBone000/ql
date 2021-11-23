#include<stdio.h>

int main(){
	int men=1, women=1, children=28;
	while(1){  // RUBBISH QINGLINE
		if(men*3 + women*2 + children == 50)
			printf("man:%d,woman:%d,child:%d\n", men, women, children);

		if(children > 1){
			children--;
			women++;
		}else{
			if(men == 30)
				break;
			men++;
			women = 1;
			children = 29-men;
		}
	}
	return 0;
}
