#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[]="adfsfasd";
	int l=strlen(str);
	printf("chuoi ban dau: %s\n",str);
	printf("cac phan tu trong chuoi: ");
	for(int i=0;i<l;i++){
		printf("%c ",str[i]);
	}
	
	
	return 0;
}
