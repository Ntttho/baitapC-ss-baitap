#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char ch[100];
	scanf("%s",ch);
	// mo file
	FILE *fptr;
	fptr = fopen("bt01.txt","a");
	// thao tac voi file
	if( fptr == NULL){
		printf("loi tao file!...");
		return 1;
	}
	fputs(ch, fptr);
	// dong file
	fclose(fptr);
	printf("ghi file thanh cong!...");
	return 0;
}
