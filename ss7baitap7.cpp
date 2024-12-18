#include<stdio.h>
int main(){
	int a; scanf("%d",&a);
	int mang[a];
	for(int i=0;i<a;i++){
		do{
			scanf("%d",&mang[i]);
		} while(mang[i]%2==0);
	}
	for(int i=0;i<a;i++){
		printf("%d ",mang[i]);
	}
	return 0;
}
