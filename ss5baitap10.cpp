#include<stdio.h>
int main(){
	int a; scanf("%d",&a);
	while(a){
		int i=a%10;
		printf("%d \n",i);
		a/=10;
	}
	return 0;
} 
