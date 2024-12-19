#include<stdio.h>
int main(){
	int a=8;
	int mang[a]={1,5,2,3,23,5,1,2};
	int  res,solan=0;
	int max=0;
	for(int i=1;i<a;i++){
		if(max<=mang[i]){
			max=mang[i];
		}
	}
	for(int i=0;i<a;i++){
		int dem=0;
		for(int j=0;j<=a;j++){
			if(mang[i]==mang[j]){
				dem++;
			}
		}
		if(dem>solan){//max solan =2
			solan=dem;
		}
	}
	for(int i=0;i<=max;i++){
		int dem=0;
		for(int j=0;j<a;j++){
			if(i==mang[j]){
				dem++;
			}
		}
		if(dem==solan){
			printf("%d ",i);
		}
	}

	return 0;
}
