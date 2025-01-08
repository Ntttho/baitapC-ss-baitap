#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[30];
	int age;
	char phonenumber[12];
	void in(){
		printf("id sinhvien: %d\n",id);
		printf("ten sinh vien: %s\n",name);
		printf("tuoi sinh vien: %d\n",age);
		printf("so dien thoai sinhvien: %s\n",phonenumber);
	}
};
int main(){
	struct sinhvien svlist[50];
	int n=1;
	for(int i=0;i<n;i++){
		svlist[i].id=i;
		gets(svlist[i].name);
		scanf("%d",&svlist[i].age);
		scanf("%s",svlist[i].phonenumber);
	}
	for(int i=0;i<n;i++){
		svlist[i].in();
	}
	return 0;
}
