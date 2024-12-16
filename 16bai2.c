#include<stdio.h>
void doi(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b =temp;
}
int main(){
	int real=1;
	int wth=3;
	doi(&real, &wth);
	
	printf("%d %d", real,wth);
	
	return 0;
}
