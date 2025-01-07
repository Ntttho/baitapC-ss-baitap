#include<stdio.h>
void change(int *ptr1, int *ptr2);
int main(){
	int a=10, b=20;
	printf("ban dau a va b: %d , %d \n",a,b);
	change(&a, &b);
	printf("luc sau a va b la: %d, %d",a,b);
	return 0;
}
void change(int *ptr1, int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
