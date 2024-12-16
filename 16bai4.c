#include<stdio.h>
int inmang(int *mang, int size){
	for(int i =0; i<size;i++){
		printf("%d", mang[i]);
	}
}
int main(){
	int arr[]={3,2,5,6};
	int size= sizeof(arr)/sizeof(arr[0]);
	inmang(arr, size);
	return 0;
}
