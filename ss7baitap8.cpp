#include<stdio.h>
int main(){
	int a,b; scanf("%d %d",&a,&b);
	int mang[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&mang[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",mang[i][j]);
		}
		printf("\n");
	}
	return 0;
}
