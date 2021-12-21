#include<stdio.h>
#include<string.h>

int main(){
	int matrix[5][5] = {{12,35,3,9,0},{2,35,9,12,1},{35,12,0,1,9},{4,90,35,9,12},{11,9,0,12,35}};
	int result[5];
	int flags[5] = {1, 1, 1, 1, 1};
	memcpy(result, matrix[0], 5*sizeof(int));
	for(int i = 1; i < 5; i++)
		for(int j = 0; j < 5; j++){
			if(!flags[j])
				continue;
			flags[j] = 0;
			for(int k = 0; k < 5; k++){
				if(matrix[i][k] == result[j]){
					flags[j] = 1;
					break;
				}
			}
		}
	for(int i = 0; i < 5; i++)
		if(flags[i])
			printf("%d ", result[i]);
	return 0;
}
