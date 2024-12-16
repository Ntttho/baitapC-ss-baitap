#include<stdio.h>
#include<math.h>
int main(){
	int a;printf("nhap so nguyen ktra so nguyen to: "); scanf("%d",&a); bool ktr=true;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			ktr=false;
			break;
		}
	}
	if(ktr){
		printf("%d la so nguyen to!\n",a);
	} else printf("%d khong phai la so nguyen to",a);
	return 0;
}
