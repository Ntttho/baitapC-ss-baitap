#include<stdio.h>
#include<string.h>
struct sinhvien{
	char name[30] = "nguyen ta tho";
	char age[3] = "19";
	char phonenumber[11] = "091231123";
};
int main(){
	struct sinhvien sv;
	printf("%s, %s, %s",sv.name,sv.age,sv.phonenumber);
	return 0;
}
