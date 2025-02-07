#include<stdio.h>
#include<stdlib.h>
int main(){
	char read[1000];
	// mo file
	FILE *f;
	f = fopen("bt01.txt","r");
	// doc dong dau tien
	if(f == NULL){
		printf("loi tao file!...\n");
		return 1;
	}
	fgets(read, 1000,f);
	printf("%s",read);
	//dong file
	fclose(f);
	printf("doc file thanh cong");
	return 0;
}
