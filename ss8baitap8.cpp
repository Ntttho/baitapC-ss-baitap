#include<stdio.h>
int main(){
	int a=5,sum=0;
	int mang[a][a]={{1,2,3,3,5},{2,5,3,4,1},{1,3,9,3,8},{1,7,3,3,4},{1,2,3,4,5}};
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if( (i==0 &&(j==a-1||j==0)) || (i==a-1 && (j==0 || j == a-1))  ){
				printf(" ");
			} else if(a%2==1 && i==j && i==(a-1)/2){
					printf(" ");
			} else {
				printf("%d",mang[i][j]);
				sum+=mang[i][j];
			}
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
