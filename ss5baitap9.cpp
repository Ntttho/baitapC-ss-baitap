#include<stdio.h>
int main(){
	int so1=0,so2=0,so3=0,n=1;
	do{
		int lc;
		printf("MENU\n\n");
		printf("1.nhap gia tri moi 3 so\n");
		printf("2.tong 3 so\n");
		printf("3.trung binh 3 so\n");
		printf("4.so nho nhat\n");
		printf("5.so lon nhat\n");
		printf("!=.thoat\n\n");
		printf("lua chon cua ban: "); scanf("%d",&lc);
		if(lc==1){
			scanf("%d %d %d",&so1,&so2,&so3);
		} else if(lc==2){
			int tong=so1+so2+so3;
			printf("tong 3 so la: %d\n",tong);
		} else if(lc==3){
			float tb=(so1+so2+so3)/3;
			printf("trung binh 3 so la: %.2f\n",tb);
		} else if(lc==4){
			if(so1<=so2 && so1<=so3){
				printf("so nho nhat la: %d\n",so1);
			} else if(so2<=so3 && so2 <=so1){
				printf("so nho nhat la: %d\n",so2);
			} else if(so3<=so1&&so3<=so2){
				printf("so nho nhat la: %d\n",so3);
			}
		} else if(lc==5){
			if(so1>=so2 && so1>=so3){
				printf("so lon nhat la: %d\n",so1);
			} else if(so2>=so3 && so2 >=so1){
				printf("so lon nhat la: %d\n",so2);
			} else if(so3>=so1&&so3>=so2){
				printf("so lon nhat la: %d\n",so3);
			}
		} else{ 
			n=0;
		}
		
	} while(n);
	return 0;
}
