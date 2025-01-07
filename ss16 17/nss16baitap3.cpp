#include<stdio.h>
void sum(int ptr1, int ptr2,int tong);

int main(){
	int a=10, b=100, tong=0;
	sum(a,b,tong);
	printf("tong 2 so tinh theo con tro: %d",tong);
	return 0;
}
void sum(int ptr1, int ptr2, int tong){
	tong=ptr1+ptr2;
}

