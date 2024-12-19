#include<stdio.h>
int main(){
	int sum=0;
	int mang[3][4]={{1,2,3,3},{1,2,3,4},{1,2,3,4}};
	for(int i=0;i<3;i++){	//i2j3
		for(int j=0;j<4;j++){
			if(i==0||i==2||j==1||j==3){
				sum+=mang[i][j];
			}
		}
	}
	printf("tong cac duong bien: %d",sum);
	return 0;
}
