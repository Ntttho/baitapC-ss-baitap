#include<stdio.h>
#include<string.h>
//65-97-->32
int main(){
	//ghi hoa dau moi tu: ghi hoa chu dau || ghi hoa sau dau space
	char str[]="hello world";
	for(int i=0;i<strlen(str);i++){
		if((i==0 && str[i]>97 &&str[i<122]) || str[i-1] == ' '  ){
			str[i]-=32;
		}
	}
	printf("%s",str);
	
}
