#include<stdio.h>
int n=5;
//mang, giatrimoi, vitricannha
void change(int *ptr,int n,int x);
int main(){
	int arr[n]={1,2,3,4,5};
	int changeindex=3, changevaliu=1000;
	change(arr, changevaliu, changeindex);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
void change(int *ptr,int x,int n){
	*(ptr+n)=x;
}

