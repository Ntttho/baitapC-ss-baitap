#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int c;
	//1
	FILE *ptr;
	ptr = fopen("bt01.txt","r");
	//2
	if(ptr == NULL){
		printf("loi tao file!...\n");
		return 1;
	}
	c = fgetc(ptr);
	printf("ky tu dau tien: %c\n",c);
	//3
	fclose(ptr);
	printf("doc ky tu dau tien thanh cong!\n");
	return 0;
}
