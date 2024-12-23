#include<stdio.h>
#include<math.h>
int main(){
	int t=1;
	int arr[1000], s ; 
	int sum=0;
	int check=0;
	int counnt;
	while(t){
		printf("===================menu====================\n");
		printf("1.nhap so phan tu va khoi tao cho no!\n");
		printf("2.in ra cac phan tu cua mang!\n");
		printf("3.in ra cac phan tu chan va tinh tong!\n");
		printf("4.in ra gia tri lon nhat va gia tri nho nhat trong mang!\n");
		printf("5.in ra cac phan tu la so nguyen to trong mang va tinh tong!\n");
		printf("6.nhap vao mot so va thong ke trong mang co bao nhieu phan tu do!\n");
		printf("7.them phan tu vao vi tri chi dinh!\n");
		printf("===========================================\n");
	int n; printf("lua chon cua ban la: "); scanf("%d",&n);
	switch(n){
		case 1:
			printf("nhap so luong phan tu: "); scanf("%d",&s);
			if(s>=0 && s<100){
				for(int i=0;i<s;i++){
				scanf("%d",&arr[i]);
				}
				check++;
			} else printf("so lieu khong hop le!");
			
			break;
		case 2:
			if(check){
				for(int i=0;i<s;i++){
				printf("phan tu thu[%d]: %d\n",i,arr[i]);
				} 
				printf("\n");
			} else printf("mang chua khai bao giatri\n");
			break;
		case 3:
			sum=0;
			counnt=0;
			if(check){
				printf("phan tu la so chan la: ");
				for(int i=0;i<s;i++){
					if(arr[i]%2==0 && arr[i]!=0){
						printf("%d ",arr[i]);
						sum+=arr[i];
						counnt++;
					}
				}
				if(counnt==0){
					printf("mang khong chua so nguyen to!\n");
				} else ;
				printf("\ntong cac phan tu la so chan: %d\n",sum);
			} else printf("mang chua khai bao giatri\n");
			break;
		case 4:
			if(check){
				int max=arr[0], min=arr[0];
				for(int i=1;i<s;i++){
					if(max<arr[i]){
						max=arr[i];
					}
					if(min>arr[i]){
						min=arr[i];
					}
				}
				printf("gia tri lon nhat cua mang la: %d\n",max);
				printf("gia tri nho nhat cua mang la: %d\n",min);
			} else printf("mang chua khai bao gia tri!\n");
			break;
		case 5:
			if(check){
				printf("so nguyen to trong mang arr: ");
				for(int i=0;i<s;i++){
					int ktr=1;
					counnt=0;
					for(int j=2;j<sqrt(arr[i]);j++){
						if(arr[i]%j==0){
							ktr=0;
							break;
						}
					}
					if(ktr){
						printf("%d ",arr[i]);
						counnt++;
					}
				}
				if(counnt==0){
					printf("mang khong chua so nguyen to");
				}
				
				printf("\n");
			}else printf("mang chua khai bao gia tri!\n");
			
			
			break;
		case 6:
			counnt=0;
			if(check){
				int o; printf("nhap gia tri ktr so lan trung: "); scanf("%d",&o);
				for(int i=0;i<s;i++){
					if(arr[i]==o){
						counnt++;
					}
				}
				printf("phan tu ban nhap xuat hien %d lan\n",counnt);
			}else printf("mang chua khai bao gia tri!\n");
			break;
		case 7:
			t=0;
			break;
		default:
			break;
		}
	}
	return 0;
}
