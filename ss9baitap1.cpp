/*
100phantu
nhap so phan tu muon nhap vao mang:dauvao + nhap vao tung phan tu
nhap so phan tu muon them vao mang:them
nhap vao gia tri va (vi tri:vt) muon them
*/
#include<stdio.h>
int main(){
	int mang[100];

	for(int i=0;i<100;i++){
		mang[i]=0;
	}// do mang khi khoi tao cac phan tu co gia tri mat dinh nen em cho cac phan tu do bang 0 de thay ro dap an
	int size=sizeof(mang)/sizeof(mang[0]);
	printf("%d\n",size);
	int dauvao;printf("nhap so phan tu ban muon nhap: ");scanf("%d",&dauvao);
	for(int i=0;i<dauvao;i++){
		scanf("%d",&mang[i]);
	}
	int them;printf("them bao nhieu giatri ");scanf("%d",&them);
	while(them--){
		int vt;
		printf("vtri nao? "); 
		scanf("%d",&vt);
		scanf("%d",&mang[vt]);
	}
	for(int i=0;i<100;i++){
		if(mang[i]!=0){
			printf("phan tu thu %d l %d\n",i,mang[i]);
		}
	}
	return 0;
}
