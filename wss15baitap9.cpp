#include<stdio.h>
#include<string.h>
int main(){
	// xoa ki tu ta co the day ky tu sau de len ky tu trung 
	char str[]="hello world";
	char a; scanf("%c",&a);
	for(int i=0;i<strlen(str); i++){
		if(str[i]==a){
			for(int j=i;j<strlen(str);j++){
				str[j]=str[j+1];
			} 
		}
	}
	printf("%s\n",str);
	return 0;
}
