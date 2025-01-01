#include<stdio.h>
#include<string.h>
int main(){
	char str[]="hello my gmail is test123@gmail.com";
	int countletter=0, countnumber=0, countspecial=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>=48&&str[i]<=57){
			countnumber++;
		} else if(( str[i]>=65 && str[i]<=91 ) || ( str[i]>=97 && str[i]<=122)){
		//65-91;97-122
			countletter++;
		} else countspecial++;
	}
	printf("so ky tu chu la: %d\nso ky tu la so la: %d\nso ky tu dac biet la: %d\n",countletter,countnumber,countspecial);
	return 0;
}
