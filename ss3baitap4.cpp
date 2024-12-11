#include<stdio.h>
#include<math.h>
int main(){
	int toan, van, anh;
	printf(" nhap diem toan van anh:");
	scanf("%d" ,&toan);
	scanf("%d" ,&van);
	scanf("%d" ,&anh);
	int tongdiem = toan + van + anh;
	float dtb = (float)tongdiem /3;
	printf(" tong diem: %d\n diem trung binh: %.2f\n",tongdiem ,dtb );
	return 0;
}
