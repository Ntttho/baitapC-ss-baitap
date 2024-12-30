// khai bao trong ham int ham(int a, int b){}--> a b duoc goi la tham so
#include<stdio.h>
void output(int m,int n){
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("in ra man hinh ma tran da nhap ne:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int row, col;//row:hang, column:cot 
	printf("nhap vao so hang va so cot: ");scanf("%d %d",&row,&col);
	output(row,col);
	return 0;
}
