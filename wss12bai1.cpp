#include<stdio.h>
void tong(int a, int b);

int main(){
	int a,b; scanf("%d %d",&a,&b);
	tong(a,b);
	return 0;
}

void tong(int a, int b){
	int sum=a+b;
	printf("%d",sum);
}
