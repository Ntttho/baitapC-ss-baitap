#include<stdio.h>
int main(){
	int m=1;
	while(m){
		int a,b; printf("nhap 2 so a va b bat ki "); scanf("%d %d",&a,&b);
		printf("CACULATER\n");
		printf("1. tong 2 so\n");
		printf("2. hieu 2 so\n");
		printf("3. tich 2 so\n");
		printf("4. thuong 2 so\n");
		printf("!=. thoat\n");
		printf("nhap lua chon cua ban: ");
		int luachon; scanf("%d",&luachon); printf("\n");
		if(luachon==1){
			int res = a+b;
			printf("tong hai so: %d\n",res);
		} else if(luachon==2){
			int res = a-b;
			printf("hieu hai so: %d\n",res);
		} else if(luachon==3){
			int res=a*b;
			printf("tich hai so: %d\n", res);
		} else if(luachon==4){
			int res = a/b;
			printf("thuong hai so: %d\n\n", res);
		} else break;
	}
 
	return 0;
} 
