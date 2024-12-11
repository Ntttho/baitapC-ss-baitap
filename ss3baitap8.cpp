#include<stdio.h>
int main(){
	int s4 , nd=0; //4 chu so
	
	scanf("%d",&s4);
nd+=s4 % 10;
s4= s4 / 10;
nd= nd *10;
nd+=s4 % 10;
s4= s4 / 10;
nd= nd *10;
nd+=s4 % 10;
s4= s4 / 10;
nd= nd *10;
nd+=s4 % 10;
	printf("%d", nd);
	return 0;
}
