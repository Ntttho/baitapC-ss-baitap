#include<stdio.h>
int main(){
	char s[100];
	gets(s);
	// 1 mo file
	FILE *file;
	file = fopen("bt01.txt", "r");
	// 2 thao tac
	if(file == NULL){
		printf("loi tao file!...\n");
		return 1;
	}
	fputs(s, file);
	// 3 dong file
	fclose(file);
	printf("ghi them vao file thanh cong!...");
	return 0;
}
