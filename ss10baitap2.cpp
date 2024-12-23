#include<stdio.h>
int main(){
	int Mang[8]={2,4,1,5,89,12,6,9};
	int size=sizeof(Mang)/sizeof(Mang[0]);
	for(int i=0;i<=size;i++){
		for(int j=size-1;j>=0;j--){
			if(Mang[j-1]>Mang[j]){
				int term=Mang[j-1];
				Mang[j-1]=Mang[j];
				Mang[j]=term;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d ",Mang[i]);
	}
	return 0;
} 
