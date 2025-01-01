#include<stdio.h>
#include<string.h>
int main(){
	char s[] ="FDSAHLL1246	ASKDJF";
	int count=0;
	for(int i=0;i < strlen(s) ;i++){
		if(s[i]>=48 && s[i]<=57){//do day la mang cac ky tu nen em fua theo bang ma ascii de so sanh
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
