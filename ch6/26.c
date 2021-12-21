#include<stdio.h>
#include<stdlib.h>

int main(){
	//我也不懂数学原理
	//但是通过范例输出能看出一些规律……
	//试着从1开始数吧
	//这里我就懒得写出来了
	//（学计算机的这点规律应该能看出来吧）
	
	int lcount;
	scanf("%d", &lcount);
	//int matrix[lcount][lcount] = {{0}};
	int **matrix = calloc(lcount, sizeof(int*));
	for(int i = 0; i < lcount; i++)
		matrix[i] = calloc(lcount, sizeof(int));
	int x = lcount/2;	//	-------> X
	int y = 0;		//	|
	int count = 0;		//	|
				//	v Y

	do{
		matrix[x][y] = ++count;
		if(count % lcount == 0)
			y = (y+1)%lcount;
		else{
			x = (x+1)%lcount;
			y = (y-1 + lcount)%lcount;
		}
	}while(count < lcount*lcount);
	for(int i = 0; i < lcount; i++){
		for(int j = 0; j < lcount; j++)
			printf("%d ", matrix[j][i]);
		putchar('\n');
	}

	for(int i = 0; i < lcount; i++)
		free(matrix[i]);
	free(matrix);

	return 0;
}
