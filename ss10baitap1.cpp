#include<stdio.h>
int main(){
	int Mang[6]={4,1,5,6,8,2};
	printf("nhap phan tu ti kiem: ");
	int Tk,ktr=0;scanf("%d",&Tk);
	int sizeMang=sizeof(Mang)/sizeof(Mang[0]);
	for(int i=0;i<sizeMang;i++){
		if(Tk==Mang[i]){
			printf("phan tu ton tai trong mang va o vi tri: %d",i);
			ktr=1;
			break;
		}
	}
	if(ktr==0){
		printf("khong ton tai");
	}
	return 0;
}
