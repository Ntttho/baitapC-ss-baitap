#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[30];
	int age;
	int phonenumber;
	void inthongtin(){
		printf("%d, ",id);
		printf("%s, ",name);
		printf("%d, ",age);
		printf("%d, ",phonenumber);
	}
};
int main(){
	sinhvien svlist[50];
	int n=1;
	int id;
	for(int i=0;i<n;i++){
		svlist[i].id=i;
		fflush(stdin);
		gets(svlist[i].name);
		fflush(stdin);
		scanf("%d",&svlist[i].age);
		scanf("%d",&svlist[i].phonenumber);
	}
	printf("nhap id sv ban muon sua: ");scanf("%d",&id);
	for(int i=0;i<n;i++){
		if(id == svlist[i].id){
			scanf("%d",&svlist[i].age);
			scanf("%d",&svlist[i].phonenumber);
		}
	}
	svlist[0].inthongtin();
	return 0;
}
