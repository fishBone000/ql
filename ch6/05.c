#include<stdio.h>

int main(){
	int matrix[10][10] = {{1}};
	printf("1 \n");
	for(int i = 1; i < 10; i++){
		for(int j = 0; j< 10; j++){
			if(!j){
				matrix[i][j] = matrix[i-1][j];
				goto end;
			}
			if(!(matrix[i-1][j] || matrix[i-1][j-1]))
				break;
			matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
			end:printf("%d ", matrix[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
