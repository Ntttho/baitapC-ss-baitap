//Khai báo và gán giá tr? cho m?t m?ng b?t k?, yêu c?u ngu?i dùng nh?p vào v? trí c?n s?a và giá tr? m?i sau khi s?a. 
//Ti?n hành ghi dè giá tr? cu trong m?ng t?i v? trí c?n s?a b?ng giá tr? m?i. 
//Sau khi s?a thì in m?ng ra màn hình d? ki?m tra.
#include<stdio.h>
int main(){
	int arr[6]={1,2,3,5,7,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("mang luc dau:\n");
	for(int i=0;i<size;i++){
		printf("phan tu thu[%d]: %d\n",i,arr[i]);
	}
	int change, changevalue;
	printf("nhap vi tri ban muon sua (luu y nho hon %d lon hon 0): ",size);
	scanf("%d",&change);
	printf("nhap gia tri ban muon sua: "); scanf("%d",&changevalue);
	printf("mang luc sau:\n");
	arr[change] = changevalue;
	for(int i=0;i<size;i++){
		printf("phan tu[%d]: %d\n",i,arr[i]);
	}
	return 0;
}
