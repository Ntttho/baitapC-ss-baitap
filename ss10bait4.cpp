#include<stdio.h>
int main(){
	int Mang[6]={2,1,7,9,6,5};
	int size=sizeof(Mang)/sizeof(Mang[0]);
	for(int i=0;i<size;i++){
		int min=Mang[i];
		for(int j=i+1;j<size;j++){
			if(min>Mang[j]){
				Mang[i]=Mang[j];
				Mang[j]=min;
				min=Mang[i];
			}
		}
	}
		/*
		i=0;j=1; min=2>1-->1 2 7 9 6 5
		i=1;j=2; min=2 -->1 2 7 9 6 5
		i=2;j=3; min=7>6 --> 1 2 6 9 7 5, min=6>5 --> 1 2 5 9 7 6;
		i=3;j=4; min=9>7;--> 1 2 5 7 9 6; min=7>6--> 1 2 5 6 9 7;
		i=4;j=5; min=9>7; --> 1 2 5 6 7 9; hoan thanh o day
		*/
		
	for(int i=0;i<size;i++){
		printf("%d ",Mang[i]);
	}
	return 0;
}
