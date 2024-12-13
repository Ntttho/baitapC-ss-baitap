#include<stdio.h>
int main(){
	int a=742, i;
	do{
		printf("nhap 1 so nguyen ");
		scanf("%d",&i);
		if(i!=a){
			printf("ban nhap sai roi moi ban nhap lai:!\n ");
		}
	} while(i!=a);
	if(i==a){
		printf("ban nhap dung roi");
	}
	return 0;
}
