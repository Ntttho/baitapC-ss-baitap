#include<stdio.h>
int main(){
	int mang[10]={0,1,2,3,4,5,6,7,8,9};
	int sizeMang=sizeof(mang)/sizeof(mang[0]);
	printf("nhap vi tri ban muon sua:"); int sua;scanf("%d",&sua);
	scanf("%d",&mang[sua]);
	for(int i=0;i<sizeMang;i++){
		printf("%d ",mang[i]);
	}
	return 0;
}
