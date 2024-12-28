#include<stdio.h>
int maxinArr(int arr[],int n);

int main(){
	int a; scanf("%d",&a);
	int array[a];
	for(int i=0;i<a;i++){
		scanf("%d",&array[i]);
	}
	int max=maxinArr(array,a);
	printf("%d",max);
	return 0;
}

int maxinArr(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
