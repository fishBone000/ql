#include<stdio.h>

int main(){
	int matrix[5][5] = {
		{1,0,0,0,0},
		{2,1,0,0,0},
		{3,2,1,0,0},
		{4,3,2,1,0},
		{5,4,3,2,1}
	};

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++)
			printf("%d ", matrix[i][j]);
		putchar('\n');
	}
	return 0;
}
