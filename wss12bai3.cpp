#include<stdio.h>
long long giaithua(int a); 

int main(){
	int number; scanf("%d",&number);
	long long result=giaithua(number);
	printf("%d",result);
	return 0;
}

long long giaithua(int a){
	long long res=1;
	for(int i=1;i<=a;i++){
		res*=i;
	}
	return res;
}
