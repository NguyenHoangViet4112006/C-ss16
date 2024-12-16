#include<stdio.h>
void capnhatphantu(int *mang, int vitri, int newvalue){
	mang[vitri]=newvalue;
}
int main(){
	int arr[]={5,1,4,2,3};
	int size =sizeof(arr)/sizeof(arr[0]);
	capnhatphantu(arr, 0,99);
	printf("mang sau khi thay doi la: ");
	for(int i =0; i<size; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
