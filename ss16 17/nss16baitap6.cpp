#include<stdio.h>
int n=6;
void search(int *ptr, int x);
int main(){
	int arr[n]={1,2,4,5,6,7};
	int input;scanf("%d",&input);
	search(arr,input);
	return 0;
}
void search(int *ptr, int x){
	for(int i=0;i<n;i++){
		if(*(ptr+i)==x){
			printf("%d",i);
			break;
		}
	}
}

