#include<stdio.h>
int main(){
	float a; printf("nhap so a: "); scanf("%f", &a);
	if(a > 0){
		printf("so a la so duong");
	} else if(a == 0){
		printf("so a bang 0");
	} else printf("so a la so am");
	return 0;
}
