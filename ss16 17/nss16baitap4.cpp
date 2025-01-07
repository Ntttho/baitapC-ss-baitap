#include<stdio.h>
int n=5;
void print(int *ptr);
int main(){
	int arr[n]={1,2,3,4,5};
	print(arr);
	return 0;
}
void print(int *ptr){
	for(int i=0;i<5;i++){
		printf("%d ",*(ptr+i));
	}
}
