#include<stdio.h>
int main(){
	int ngay, thang, nam;
	printf("nhap vao so nam"); scanf("%d",&nam);
	printf("nhap vao so thang: "); scanf("%d",&thang);
	printf("nhap vao so ngay: "); scanf("%d",&ngay);
	if(nam%4==0 && nam%100!=0){
		if(thang ==1&&thang ==3&&thang ==5&&thang ==7&&thang ==8&&thang ==10&&thang ==12){
			if(ngay<=31 && ngay>0){
				printf("ngay thang nam hop le");
			}
		} else if(thang ==4&&thang ==6&&thang ==9&&thang ==11){
			if(ngay <=30 && ngay > 0){
				printf("ngay thang nam hop le");
			}
		} else if(thang==2){
			if(ngay<=29 && ngay >0){
				printf("ngay thang nam hop le");
			}
		}
	} else if(nam%4!=0 || nam%100==0){
		if(thang ==1&&thang ==3&&thang ==5&&thang ==7&&thang ==8&&thang ==10&&thang ==12){
			if(ngay<=31 && ngay>0){
				printf("ngay thang nam hop le");
			}
		} else if(thang ==4&&thang ==6&&thang ==9&&thang ==11){
			if(ngay <=30 && ngay > 0){
				printf("ngay thang nam hop le");
			}
		} else if(thang==2){
			if(ngay<=28 && ngay >0){
				printf("ngay thang nam hop le");
			}
		}
	} else printf("ngay thang nam khong hop le");
	return 0;
}
