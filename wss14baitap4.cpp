#include<stdio.h>
#include<string.h>
int main(){
	char str[]="sfshgkaqoptn,mxzv";
	int len=strlen(str);
	int sum=0;
	char c; scanf("%c",&c);
	for(int i=0;i<len;i++){
		if(c==str[i]){
			sum++;
		}
	}
	printf("%d",sum);
	
	return 0;
}
