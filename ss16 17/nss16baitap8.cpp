#include<stdio.h>
#include<string.h>
int max=100;
int main(){
	char inputString[max], reverseString[max];
	gets(inputString);
	char *ptr1=inputString, *ptr2=reverseString;

	int lenght=strlen(inputString);
	for(int i=0;i<lenght/2;i++){
		char temp=*(ptr1+i);
		*(ptr1+i)=*(ptr1+lenght-i-1);
		*(ptr1+lenght-i-1)=temp;
	}
	strcpy(reverseString, inputString);
	printf("hello in chuoi nguoc lai ne\n%s",reverseString);
	return 0;
}
