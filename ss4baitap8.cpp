#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b+c && b<a+c && c<b+a){
		printf("ba canh nay la ba canh cua 1 tam giac");
	} else printf("ba canh nay khong phai chung 1 tam giac");
	return 0;
}
