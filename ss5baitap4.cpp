#include<stdio.h>
int main(){
	int a; scanf("%d",&a);
	do{
		if(a>=1 && a<=10){
			for(int i=1; i<=10; i++){
				int res=i*a;
				printf("%d * %d =%d \n",i,a,res);
			}
		} else printf("input khong dung");
	} while(a<=1 && a>=10);
	return 0;
} 
