#include<stdio.h>
int main(){
	int mang[]={1,5,2,3,23,4,2,2};
	int size=sizeof(mang)/sizeof(mang[0]); 
	int  res,solan=0;
	for(int i=0;i<size;i++){
		int dem=0;
		for(int j=0;j<=size;j++){
			if(mang[i]==mang[j]){
				dem++;
			}
		}
		if(dem>solan){
			solan=dem;
			res=mang[i];
		}
	}

	printf("so %d trong mang xuat hien nhieu nhat voi so lan la: %d",res,solan);
	return 0;
}
