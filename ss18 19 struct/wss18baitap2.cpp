#include<stdio.h>
#include<string.h>
struct sinhvien{
	char name[30];
	char age[3];
	char phonenumber[10];
};
int main(){
	struct sinhvien sv;
	gets(sv.name);
	scanf("%s%s",sv.age,sv.phonenumber);
	printf("%s %s %s",sv.name,sv.age,sv.phonenumber);
	return 0;
}
