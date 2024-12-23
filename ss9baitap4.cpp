#include<stdio.h>
const int Max_size =100;

int size=0;
int main(void){
	int array[Max_size];
	int m=1;
	//xay dungj tinh nang cho chuong trinj
	while(m){
		printf( "============menu===========\n");
		printf( "1, nhap phan tu cho mang\n");
		printf( "2. hien thi mang\n");
		printf( "3. them phan tu\n");
		printf( "4. sua phan tu\n");
		printf( "5. xoa phan tu\n");
		printf( "6. thoat\n");
		printf( "===========================\n");
		
		int choice; printf("phuong thuc su dung menu:"); scanf("%d",&choice);
		switch(choice){
			case 1:
				int n; printf("nhap so phan tu ban muon them:"); scanf("%d",&n);
				if(n==0 || n>Max_size){
					printf("nhap so luong phan tu khong hop le\n");
					break;
				} else{
					for(int i=0;i<n;i++){
						printf("\nnhap arr[%d]: ",i);
						scanf("%d",array+i);
						size=n;
					}
				}
				break;
				
			case 2:
				if(size==0){
					printf("mang chua duoc nhap");
				} else {
					for(int i=0;i<size;i++){
					printf("phan tu thu %d cua mang la: %d\n",i,*(array+i));
					}
				}
				printf("\n");
				break;
			case 3:
				int add, addindex;
				//add vitri, addindex: giatri them
				printf("nhap vi tri muon them: ");
				scanf("%d",&add);
				printf("nhap gia tri muon tham: ");
				scanf("%d",&addindex);
				
				if(add<0){
					add=0;
				} else if(add>size){
					add=size;
					}
					//1 2 3 5<100>-->1 100 2 3 5
				for(int i = size;i>add;i--){
						array[i]=array[i-1];
				}
				array[add]=addindex;
				size++;
				break;
			case 4:
				int change, changevl;
				printf("vi tri thay the: "); scanf("%d",&change);
				if(change>=0 && change<size){
					printf("gia tri thay the: "); scanf("%d",&changevl);
					*(array+change)=changevl;
				}
				break;
			case 5:
				int loc;
				printf("nhap vi tri muon xoa: "); scanf("%d",&loc);
				if(loc>=0 && loc<size){
					for(int i=loc;i<size;i++){
						array[i]=array[i+1];
					}
					size--;
				}
				break;
			case 6:
				printf("thoat menu");
				m=0;
				break;
			default:
				printf("khong hop le\n");
				break;
		}
	}
	return 0;
}
