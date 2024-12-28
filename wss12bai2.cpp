#include<stdio.h>
void xuatMang(int arr[], int n);

int main(){
	int a; scanf("%d",&a);
	int array[a];
	for(int i=0;i<a;i++){
		scanf("%d",&array[i]);
	}
	xuatMang(array,a);
	return 0;
}

void xuatMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
