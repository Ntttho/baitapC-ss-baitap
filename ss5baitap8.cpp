#include<stdio.h>
int main(){
	int so1, so2; printf("nhap vao 2 so: "); scanf("%d %d",&so1,&so2);
	int tich=so1*so2;
	int solon,sobe;
	if(so1==so2){
		printf("boi chung nho nhat cua 2 so la: %d",so1);
	} else if(so1>so2){
		solon=so1; sobe=so2;
	} else if(so1<so2){
		sobe=so1; solon=so2;
	}
	for(int i=solon;i<=tich;i++){
		if(i%solon==0 && i%sobe==0){
			printf("boi chung nho nhat cua 2 so la: %d",i);
			break;
		}
	}
	return 0;
}
