#include<stdio.h>
int main(){
	int sonho, solon, ucln;
	printf("nhap vao 2 so: ");
	int so1 , so2; scanf("%d",&so1); scanf("%d",&so2);
	if(so1==so2){
		printf("uoc chung lon nhat cua 2 so la: %d",so1);
	}else if(so1>so2){
		sonho=so2; solon=so1;
	} else if(so2>so1){
		sonho = so1; solon=so2;
	}
	for(int i=1;i<=sonho;i++){
		if(sonho%i==0 && solon%i==0){
			ucln=i;
		}
	}
	printf("uoc chung lon nhat cua hai so la: %d\n",ucln);
	return 0;
}
