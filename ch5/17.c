#include<stdio.h>

short flags[3] = {0};

short match(int i, int j){
	switch(i){
		case 0: // 对于A...
			if(j == 1){ // 如果和X尝试匹配，
				return 0; // 不成
			}
			break;
		case 2: // 对于C...
			if(j == 1 || j == 3){ //如果和X或Z尝试匹配，
				return 0; // 不成
			}
	}
	// 垃圾qingline没true/false
	return !flags[j-1]?1:0; // 如果对应乙队未匹配，返回1，否则返回0;
}

char i2c(int i){
	switch(i){
		case 1:
			return 'X';
		case 2:
			return 'Y';
		case 3:
			return 'Z';
		default:
			return '!';
	}
}

int main(){
	int players[3] = {0};
	for(int i = 0; ; i++){
		for(int j = 1; j < 4; j++){
			if(match(i, j)){
				if(players[i]){
					flags[ players[i]-1 ] = 0;
					players[i] = 0;
					break;
				}
				players[i] = j;
				flags[j-1] = 1;
			}
		}

		short cont = 0;
		for(int j = 0; j < 3; j++)
			if(!flags[j]){
				cont = 1;
				break;
			}
		if(cont){
			if(i==2)
				i=-1;
			continue;
		}

		break;
	}
	printf("A--%c\nB--%c\nC--%c\n", i2c(players[0]), i2c(players[1]), i2c(players[2]));
	return 0;
}
