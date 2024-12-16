#include<stdio.h>
int main(){
	int a; printf("nhap so co ba chu so: "); scanf("%d",&a);
	int A=0,ar=a;
	while(ar){
		int i=ar%10;
		ar/=10;
		A+=i*i*i;
	}
	if(A==a){
		printf("%d la so Armstrong",A);
	} else printf("%d khong phai la so Armstrong");
	return 0;
}
