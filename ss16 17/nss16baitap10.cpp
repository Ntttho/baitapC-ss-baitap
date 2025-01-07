//1 mang 1 vitri
#include<stdio.h>
int max=6;
void deletearr(int *ptr, int del);
int main(){
	int arr[max]={1,2,3,7,6,5};
	int del=1;
	deletearr(arr, del);
	for(int i=0;i<max;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
void deletearr(int *ptr, int del){
	for(int i=del;i<max;i++){
		*(ptr+i)=*(ptr+i+1);
	}
max--;
}

