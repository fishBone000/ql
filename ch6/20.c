#include<stdio.h>

int main(){
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	//int result[3][2] = {{0}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++)
			printf("%d ", a[j][i]);
			//result[i][j] = a[j][i];
		putchar('\n');
	}
	return 0;
}
