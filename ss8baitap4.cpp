#include<stdio.h>
int main(){
	int res=0;
	int mang[3][4]={{1,2,3,4} , {5,6,7,8} , {12,23,14,654}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(res<=mang[i][j]){
				res=mang[i][j];
			}
		}
	}
	printf("gia tri lon nha trong mang tren la: %d",res);
	return 0;
}
