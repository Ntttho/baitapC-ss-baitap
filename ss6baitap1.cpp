#include<stdio.h>
int main(){
	int res=0;
	for(int i=1;i<=5;i++){
		int a; scanf("%d",&a);
		if(a%2==1){
			res+=a;
		}
	} printf("tong so le: %d",res);
	return 0;
}
