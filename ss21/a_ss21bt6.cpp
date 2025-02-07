#include<stdio.h>
#include<stdlib.h>
#define max 100
int main(){
	FILE *f0 = fopen("bt01.txt","r");
	FILE *f1 = fopen("bt06.txt","w");
	if(f1 == NULL){
		printf("loi tao file f1!\n");
		exit(1);
	}
	if(f0==NULL){
		printf("loi tao file f0\n");
		exit(1);
	}
	char read[max];
	while(fgets(read, max, f0) != 0){
		fputs(read, f1);
	}
	fclose(f0); fclose(f1);
	printf("sao chep thanh cong");
	return 0;
}
