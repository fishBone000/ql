#include<stdio.h>
void cypher(char c){
	int flag = 0;
	if(c >= 'a')
		flag = 1;
	int index = c - (flag?'a':'A');
	index+=4;
	if(flag > 25)
		flag -= 26;
	putchar(index+(flag?'a':'A'));
	return;
}

int main(){
	char c1='C', c2='h', c3='i', c4='n', c5='a';
	cypher(c1);
	cypher(c2);
	cypher(c3);
	cypher(c4);
	cypher(c5);
	return 0;
}
