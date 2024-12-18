#include<stdio.h>
int main(){
	int mang[5]={0,1,2,3,4}, a=0;
	for(int i=0;i<5;i++){
		printf("phan tu thu %d cua mang la: %d\n",i,mang[i]);
		a++;
	}  printf("do dai cua mang tren la: %d\n",a);
	return 0;
}
