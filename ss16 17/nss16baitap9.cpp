//1 mang, 1 giatrimoi, 1 vitrithemoi
#include<stdio.h>
int size=6;
void addarray(int *ptr, int m, int n);
int main(){
	int arr[size]={1,2,3,7,4,5};
	int addindex=2, addvaliu=100;
	size++;//7
	addarray(arr, addindex, addvaliu);
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
void addarray(int *ptr, int m, int n){
	for(int i=size;i>m;i--){
		*(ptr+i)=*(ptr+i-1);
	}
	*(ptr+m)=n;
}

