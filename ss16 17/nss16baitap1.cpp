#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	printf("cach 1: %d\n",a);
	printf("cach 2: %d\n",*ptr);
	return 0;
}
