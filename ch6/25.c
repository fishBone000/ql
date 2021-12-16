#include<stdio.h>

int main(){
	// RUBBISH QINGLINE!!!又不把题目讲清楚
	// 唉，我开始怀疑国内的网站是不是大都是外包的了= =
	// 外包完之后看一眼就吃灰
	// 也不测试一下，出问题也不改一改
	// 反正我是懒得汇报问题了= =
	// 自己不认真做网站，也罢
	// 切
	// codewars不比它好很多倍？就是连接慢了点……
	short flags[30] = {0}; // 完了，小丑竟是我，刚刚才发现C没有bool
	int i = 0, j = -1;

	do{
		i++;
		j = (j+1)%30;
		while(flags[j]){
			j = (j+1)%30;
		}

		if(!(i%9)){
			flags[j] = 1;
		}
	}while(i/9 < 15);

	for(int j = 0; j < 30; j++){
		printf("%d:%d", j+1, flags[j]);
		putchar(j==14?'\n':' ');
	}

	return 0;
}
