#include<stdio.h>
int main(){
	int arr[100];
	printf("nhap vao so phan tu ban dau:");
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("phan tu[%d] ",i);
		scanf("%d",&arr[i]);
	}
	printf("nhap vao phan tu ban muon xoa: ");
	int del; scanf("%d",&del);
	if(del<n){
		for(int i=del;i<n;i++){
			arr[i]=arr[i+1];
		}
		n--;
	}
	printf("in mang moi ra man hinh\n");
	for(int i=0;i<n;i++){
		printf("phan tu thu[%d]: %d\n",i,arr[i]);
	}
	
	return 0;
}
