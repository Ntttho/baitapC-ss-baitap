#include<stdio.h>
int main(){
	int thang;
	scanf("%d",&thang);
	if(thang == 2){
		printf("thang nay co 28 ngay");
	} else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11){
		printf("thang nay co 30 ngay");
	} else printf("thang nay co 31 ngay");
	return 0;
}
