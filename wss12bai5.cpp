#include<stdio.h>
int Checknt(int n);
int main(){
	int number1, number2; printf("nhap lan luot 2 so nguyen: "); scanf("%d %d",&number1,&number2);
	int res1=Checknt(number1)  , res2=Checknt(number2);
	if(res1){
		printf("so %d la so nguyen to!\n",number1);
	} else printf("so %d khong phai la so nguyen to!\n",number1);
	if(res2){
		printf("so %d la so nguyen to!\n",number2);
	} else printf("so %d khong phai la so nguyen to!\n",number2);
	return 0; 
} 
int Checknt(int n){
	int result=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			result=0;
		}
	}
	return result;
}
