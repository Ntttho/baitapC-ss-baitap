#include<stdio.h>
int main(){
	int n; printf("nhap so phan tu(>=1): ");
	scanf("%d",&n);
	if(n<=0){
		n=1;
	}
	int arr[n];
	for(int i=0;i<n;i++){//nhap phan cua mang ne!
		scanf("%d",&arr[i]);
	}
	
	
	int t=1;
	while(t){
		printf("==========menu==========\n");
		printf("1. in gia tri cac phan tu cua mang\n");
		printf("2. su dung insertion sort sap xep mang giam dan + in ra\n");
		printf("3. su dung selection sort sap xep mang tang dan va in ra\n");
		printf("4. su dung bubble sort sap xep mang giam dan va in ra\n");
		printf("5/ thoat\n");
		printf("==========================\n");
		
		int o; printf("nhap lua chon cua ban: "); scanf("%d",&o);
		switch(o){
			case 1:
				for(int i=0;i<n;i++){
					printf("phan tu thu[%d]: %d\n",i,arr[i]);
				}
				break;
			case 2://sap xep chen insertion sort
				for(int i=1;i<n;i++){
					int j=i-1;
					int key=arr[i];
					while(j>=0 && key<arr[j]){
						arr[j+1]=arr[j];
						j--;
					}
					arr[j+1]=key;
				}
				break;
			case 3://sellection sort
				for(int i=0; i<n;i++){
					int max=arr[i];
					for(int j=i+1;j<n;j++){
						if(max<arr[j]){
							arr[i]=arr[j];
							arr[j]=max;
							max=arr[i];
						}
					}
				}
				break;
			case 4://bubble sort
				for(int i=0;i<n;i++){
					for(int j=0;j<n-1-i;j++){
						 if(arr[j]>arr[j+1]) {
						 	int temp=arr[j];
						 	arr[j]=arr[j+1];
						 	arr[j+1]=temp;
						 }
					}
				}
				break;
			case 5:
				t=0;
				break;
			default:
				break;
		}
		
	}
	
	
	return 0;
}

