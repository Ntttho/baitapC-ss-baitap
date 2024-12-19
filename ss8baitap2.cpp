#include<stdio.h>
int main(){
	int mang[5]={0,1,2,3,4};
	int m,ktra; scanf("%d",&m);
	for(int i=0;i<5;i++){
		if(mang[i]==m){
			ktra=1;
			printf("vi tri phan tu trong mang la: %d",i);
			break;
		}else{
			ktra=0;
		}
	} if(ktra==0){
		printf("phan tu khong ton tai trong mang"); 
	}
	return 0;
}
