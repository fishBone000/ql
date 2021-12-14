#include<stdio.h>

int main(){
	int I = 0, J = 0;
	int matrix[3][4] = {{0}};
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++){
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] > matrix[I][J]){
				I = i;
				J = j;
			}
		}
	printf("max=%d\nrow=%d\ncolumn=%d", matrix[I][J], I, J);
	return 0;
}
