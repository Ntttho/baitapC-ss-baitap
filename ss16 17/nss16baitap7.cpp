#include<stdio.h>
int n=6;
void sort(int *ptr);
int main(){
	int arr[n]={4,3,2,7,5,1};
	sort(arr);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
void sort(int *ptr){
	for(int i=1;i<n;i++){
		int j=i-1;
		int key=*(ptr+i);
		while(j>=0 && key<*(ptr+j)){
			*(ptr+j+1)=*(ptr+j);
			j--;
		}
		*(ptr+j+1)=key;
	}
}

