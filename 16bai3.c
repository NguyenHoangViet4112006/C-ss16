#include<stdio.h>
int tinhtong(int *a, int *b){
	return *a+*b;
}
int main(){
	int num1=1;
	int num2=3;
	int ketqua;
	ketqua=tinhtong(&num1, &num2);
	printf("tong cua %d va %d la: %d", num1, num2, ketqua);
	return 0;
}
