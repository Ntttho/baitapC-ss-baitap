//Khai b�o v� g�n gi� tr? cho m?t m?ng b?t k?, y�u c?u ngu?i d�ng nh?p v�o v? tr� c?n s?a v� gi� tr? m?i sau khi s?a. 
//Ti?n h�nh ghi d� gi� tr? cu trong m?ng t?i v? tr� c?n s?a b?ng gi� tr? m?i. 
//Sau khi s?a th� in m?ng ra m�n h�nh d? ki?m tra.
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
