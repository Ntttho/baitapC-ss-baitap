#include<stdio.h>
int main(){
	int mang[5]={1,3,5,7,9},ktra=0;
	for(int i=0;i<5;i++){
		if(mang[i]%2==0){
			printf("%d",mang[i]);
			ktra=1;
		}
	}
	if(ktra==0){
		printf("mang khong co so chan!");
	}
	return 0;
}
