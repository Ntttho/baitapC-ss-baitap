#include<stdio.h>
int main(){
	int a=4,sum=0;
	int mang[a][a]={{1,2,3,3},{2,5,3,4},{1,9,3,8},{1,7,3,4}};
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(j==i||i+j==a-1){
				printf("%d ",mang[i][j]);
				sum+=mang[i][j];
			} else printf(" ");
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
