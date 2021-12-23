//数组行列转换

#include<stdio.h>

int main(){
	int matrix[3][3] = {{1,2,3},{3,4,5},{4,5,6}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			printf("%d ", matrix[j][i]);
		putchar('\n');
	}
	return 0;
}
