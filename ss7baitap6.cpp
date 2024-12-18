#include<stdio.h>
int main(){
	int mang[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(mang[i]%2==0){
			mang[i]+=3;
		} else mang[i]+=2;
	}
	for(int i=0;i<5;i++){
		printf("%d ",mang[i]);
	}
	return 0;
}
