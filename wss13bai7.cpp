#include<stdio.h>
int ucln(int max, int min);
int main(){
	int number1, number2; printf("nhap vao 2 so nguyen: ");scanf("%d%d",&number1,&number2);
	int lon,nho;
	if(number1==number2){
		printf("uoc chung lon nhat la: %d",number1);
	} else if(number1>number2){
		lon=number1;
		nho=number2;
	} else {
		lon=number2;nho=number1;
	}
	int res=ucln(lon,nho);printf("uoc chung lon nha cua 2 so la: %d",res);
	return 0;
}
int ucln(int max, int min){
	int res=0;
	for(int i=1;i<=min;i++ ){
		if(max%i==0 && min%i==0 && i>res){
			res=i;
		}
	}
	return res;
}
