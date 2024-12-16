#include<stdio.h>
int main(){
	int tienbandau, laisuat, sothang;
	printf("tien ban dau: "); scanf("%d",&tienbandau);
	printf("lai suat: "); scanf("%d",&laisuat);
	printf("so thang: "); scanf("%d",&sothang);
	float res1=tienbandau,res2=0,res3=0;
	for(int i=1;i<=sothang;i++){
		res2=res1*laisuat/100;
		res3+=res2;
		res1+=res2;
	}
	printf("tien lai: %f\n",res3);
	printf("tien nhan duoc: %f",res1);
	return 0;
}
