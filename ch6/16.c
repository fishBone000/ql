#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int length;
#define LENGTH_16 length
//令LENGTH_16和length等效，详情可以自己百度
//不需要在意_16是什么意思……之前为了debug加了这个后缀，16其实是第16节的意思
//用就完事了


void sort(int *list){
	//这个函数会把list里的数组从小到大排序（大概是吧，忘了），并list的内容替换为排序结果
	//数组中所有元素均为需要排列的数据
	//因为我有的时候会用数组第一个元素储存数组长度（很方便对吧）
	//但这个函数不会这样。长度的话直接用LENGTH_16就好
	//
	//这个函数的思路是：
	//新建两个数组，result用于储存结果，flags用于表示list中的元素是否已经被加进result中
	//遍历list，找到最小的元素，加入result中，同时在flags中标记
	//然后重新遍历。如果list中某元素对应的flags为1，即list中这个元素被标记，则跳过这个list元素

	//calloc用于分配内存地址，且数值全部初始化为0，注意和malloc区分（如果你不知道malloc就算了）
	//格式为：
	//calloc(长度, 元素大小）
	//返回值为内存地址，不过因为返回值是void*类型，要强制转换一下
	short *flags = (short*)calloc(LENGTH_16, sizeof(short)); 
	//result的第一个元素用于储存数组长度，所以分配了LENGTH_16+1个元素
	int *result = (int*)calloc(LENGTH_16+1, sizeof(int));

	while(1){
		int min, j=-1;
		for(int i = 0; i < LENGTH_16; i++){
			if(flags[i]) //如果这个元素被flags标记，则跳过
				continue;

			//j==-1表示此次遍历中尚未找到最小值（毕竟j的初始值为-1）
			//所以下面的条件的意思是：如果这次遍历尚未找到最小值，
			//或者目前这个元素比之前找到的最小值更小的话
			if(j==-1 || list[i] < min) 
				min = list[j=i]; //就把这个数组的下标储存在j中，并且把最小值储存在min中（话说min好像不是必须的……不管了）
		}
		if(j == -1) //如果上次遍历没找到最小值（也就是说list所有元素都被标记了的话
			break; //就跳出循环
		flags[j] = 1; //把本次遍历之后找到的最小元素标记
		result[++result[0]] = min;//++result[0]是为了让第一个元素（即所储存的数组长度）自增，然后把最小值储存在result末尾
	}
	//把result里的内容复制到list中去
	//memcpy用于复制内存，用法是：
	//memcpy(目标地址, 来源地址, 字节数量)
	//之所以是result+1，是因为result的第一个元素用于表示result长度
	//所以从result的第2个(从1开始数）元素开始复制
	memcpy(list, result+1, LENGTH_16*sizeof(int));
	free(flags);//释放之前分配的内存，其实不释放也不影响这个程序，不过还是养成好习惯吧
	free(result);
	return;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int *listA = (int*)calloc(m, sizeof(int));
	int *listB = (int*)calloc(n, sizeof(int));
	int *reserveA = listA;
	int *reserveB = listB;

	for(int i = 0; i < m; i++)
		scanf("%d", listA+i);
	for(int i = 0; i < n; i++)
		scanf("%d", listB+i);

	if(m>n){
		int *p_temp, temp;
		p_temp = listA;
		temp = m;
		listA = listB;
		m = n;
		listB = p_temp;
		n = temp;
	}

	int *result = (int*)calloc(m+1, sizeof(int));

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(listA[i] == listB[j])
				result[++result[0]] = listA[i];
	LENGTH_16 = result[0];
	if(!LENGTH_16)
		goto end;
	sort(result+1);
	for(int i = 0; i < LENGTH_16; i++){
		fprintf(stdout, "%d ", result[i+1]);
	}
	end: free(reserveA);
	     free(reserveB);
	     free(result);
	return 0;
}
