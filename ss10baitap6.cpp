#include<stdio.h>
int main(){
	int n,m; printf("nhap lan luot n va m: "); scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int size=m*n, l=0; int array[size];
	for(int a=0;a<n;a++){
		for(int b=0;b<m;b++){
			array[l]=arr[a][b];
			l++;
		}
	}
	for(int a=0;a<size;a++){
		printf("%d ",arr[a]);
	}
	/*n, m vd; 3,4--
	  0 1 2 3
	0        
	1        
	2         
	 
	
	
	
	*/
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	return 0;
}
