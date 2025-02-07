#include<stdio.h>
#include<stdlib.h>
struct student{
	char id[10], name[20];
	int age;
}; 
int main(){
	int n; printf("nhap so luong sinh vien: "); scanf("%d",&n);
	struct student sv[n];
	for(int i=0; i<n ; i++){
		printf("id: "); scanf("%s",sv[i].id);
		printf("name: "); fflush(stdin); gets(sv[i].name);
		printf("age: "); scanf("%d",&sv[i].age);
	}
	FILE *f = fopen("student.txt","w");
	if(f == NULL){
		printf("loi tao file!\n");
		exit(1);
	}
	for(int i=0; i<n; i++){
		fputs(sv[i].id, f);
		fputs(sv[i].name, f);
		fprintf(f , " %d\n", sv[i].age);
	}
	fclose(f);
	printf("ghi thanh cong\n");
}
