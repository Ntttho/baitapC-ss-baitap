#include<stdio.h>
int main(){
	int mang[5]={8,4,5,1,7};
	int a=mang[0];
	for(int i=0; i<5;i++){
		if(a>=mang[i]){
			a=mang[i];
		}
	}
	printf("gia tri nho nhat trong mang la: %d",a);
	return 0;
}
