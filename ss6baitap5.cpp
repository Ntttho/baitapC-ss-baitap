#include<stdio.h>
int main(){
	int thang, nam;
	printf("nhap vao thang nam va in ra so ngay:"); scanf("%d%d",&thang,&nam);
	if(thang==2){
		if(nam%4==0 && nam%100!=0){
			printf("thang nam nay co 29 ngay!\n");
		} else printf("thang nam nay co 28 ngay!\n");
	} else if(thang ==4 || thang==6||thang==9||thang==11){
		printf("thang nam nay co 30 ngay!\n");
	} else if(thang==1 ||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		printf("thang nam nay co 31 ngay!\n");
	} else printf("thang nay khong hop le");
	return 0;
}
