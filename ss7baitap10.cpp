#include<stdio.h>
#include<math.h>
int main(){
	int a; scanf("%d",&a);
	int mang[a];
	for(int i=0;i<a;i++){
		scanf("%d",&mang[i]);
	}
	for(int i=0;i<a;i++){
		int so=mang[i],ktra=1;
		for(int m=2;m<=sqrt(so);m++){
			if(so%m==0){
				ktra=0;
			}
		}
		if(ktra==1){
			printf("%d ",mang[i]);
		}
	}
	return 0;
}
