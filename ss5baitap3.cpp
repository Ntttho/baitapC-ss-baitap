#include<stdio.h>
int main(){
	int a,sum=0; scanf("%d",&a);
	for(int i=1; i<=a; i++){
		sum+=i;
	}
	printf("tong tu 1 den a la: %d",sum);
	return 0;
}
