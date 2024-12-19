#include<stdio.h>
int main(){
	int a=3,sum=0;
	int mang[a][a]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==j){
				sum+=mang[i][j];
				printf("%d",mang[i][j]);
			} else printf(" ");
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
