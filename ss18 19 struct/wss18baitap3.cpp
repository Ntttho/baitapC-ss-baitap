#include<stdio.h>
#include<string.h>
struct sinhvien{
	char name[50];
	int age;
	long long phonenumber;
	void in(){
		printf("ten sinh vien: %s\n",name);
		printf("tuoi sinh vien: %d\n",age);
		printf("so dien thoai sinhvien: %l1ld\n",phonenumber);
	}
};
void nhapinfor(const sinhvien sv){
	gets(sv.name);
	scanf("%d",&sv.age);
	scanf("%lld",&sv.phonenumber);
	
}
//c++ su dung vector de luu cac giai\ tri svi
// c chi co the dung voi mang
int main(){
	int n=5; printf("so luong sinh vien: %d\n",n);
	sinhvien svlist[n];
	for(int i=0;i<n;i++){
		nhapinfor(svlist[i]);
	}
	for(int i=0;i<n;i++){
		svlist[i].in();
	}
	return 0;
}
