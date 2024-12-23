#include<stdio.h>
int main(){
	int Mang[6]={5,4,3,9,1,2};
	int size=sizeof(Mang)/sizeof(Mang[0]);
for(int i=1;i<size;i++){
	int j=i-1, var=Mang[i];
	while(j>=0 && var<Mang[j]){
		Mang[j+1]=Mang[j];
		j--;
	}
	Mang[j+1]=var;
	/*
	i=1; j=0; mangi=var=4;mangj=5;>while: j=0D,var=4<mangj=5> dao lai
	mang1=5; j=-1; mang0=4--> mang sap xep = 4 5 3 9 1 2
	tiep tuc nhu vayj so sanh mang2 voi mang 1--> dung doi laij 4 3 5 9 1 2
	tuong tu 3 4 5 9 1 2;
	3 4 5 9 1 2
	1 3 4 5 9 2
	1 2 3 4 5 9
	*/
}
	
	for(int i=0;i<size;i++){
		printf("%d ",Mang[i]);
	}
	return 0;
}
