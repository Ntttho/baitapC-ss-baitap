#include<stdio.h>
int main(){
	int matkhau=1247;
	while(matkhau){
		int mk;printf("nhap mat khau: "); scanf("%d",&mk);
		if(mk==matkhau){
			matkhau=0;
			printf("ban nhap mat khau dung chuong trinh ket thuc!");
		} else printf("mat khau sai yeu cau nhap lai\n");
	}
	return 0;
}
