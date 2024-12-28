//so hoan hao: cac uoc cong vao bang chinh no!
#include<stdio.h>
int Checkshh(int a);

int main(){
	int number;printf("nhap so can kiem tra: ");scanf("%d",&number);
	int res=Checkshh(number);
	if(res==1){
		printf("so %d la so hoan hoa!",number);
	}else printf("so %d khong phai so hoan hao!",number);
	return 0;
}

int Checkshh(int a){
	int sum=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			sum+=i;
		}
	}
	if(sum==a){
		return 1;
	}else return 0;
}
