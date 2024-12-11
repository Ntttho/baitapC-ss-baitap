#include<stdio.h>
#include<math.h>
int main(){
	double pi = 3.14159;
	int r;
	printf("nhap ban kinh:");
	scanf("%d", &r);
	double chuvi = pi * 2 *r;
	double dientich= pi * pow(r,2);
	printf("chu vi hinh %.2f\ndien tich hinh %.2f\n:" ,chuvi ,dientich);
	return 0;
}
