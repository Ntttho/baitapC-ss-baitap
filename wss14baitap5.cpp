#include<stdio.h>
#include<string.h>
/*
void ham(char str[]){
	int count=0;
	for(int i=0; str[i] != "\0" ;i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("%d",count);
	// vong lap tham khao tren mang nhung he dieu hanh cua em khong su dung duoc
}
*/
int main(){
	char str[]="hello c c++";
	int count=1, space=0;
	for(int i=0;i<strlen(str);i++){
		if( str[i]==' ' ) {//em tham khao dau nhay don tren mang
			count++;
		}
	}
	// tham khao vong lap for doi voi chuoi
	printf("%d",count);
	return 0;
}
