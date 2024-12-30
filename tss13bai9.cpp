#include<stdio.h>
#include<string.h>
#include<math.h>
const int max=100;
int arr[100], size=0, del, key,i,j, choi=0, choi2, search;
int choicex;
void printmenu();
void scanarr(int arr[]);
void printarr(int arr[]);
void addvaliu(int arr[]);
void change(int arr[]);
void dele(int arr[]);
void sort(int arr[]);
void seach(int arr[]);
int main(){
	int t=1;
	while(t){
		printmenu();
		int choice; printf("nhap lua chon cua ban: "); scanf("%d",&choice);
		switch(choice){
			case 1:
				scanarr(arr);
				break;
			case 2:
				printarr(arr);
				break;
			case 3:
				addvaliu(arr);
				break;
			case 4:
				change(arr);
				break;
			case 5:
				dele(arr);
				break;
			case 6:
//choicex	
sort(arr);
				break;
			case 7:
seach(arr);
				break;
			case 8:
				t--;
				break;
		}
	}
}
void printmenu(){
	printf("=====================menu=====================\n");
	printf("1. nhap so phan tu can nhap va nhap gia tri cua cac phan tu\n");
	printf("2. in ra gia tri phan tu dang quan ly\n");
	printf("3. them phan tu va vi tri chi dinh\n");
	printf("4. sua 1 phan tu o vi tri chi dinh\n");
	printf("5. xoa 1 phan tu o vi tri chi dinh\n");
	printf("6. sap xep cac phan tu\n");
	printf("	a. tang dan\n");
	printf("	b. giam dan\n");
	printf("7. tim kiem phan tu nhap vao\n");
	printf("	a. tim kiem tuyen tinh\n");
	printf("	b. tim kiem nhi phan\n");
	printf("8. thoat\n");
	printf("================================================\n");
}
void scanarr(int arr[]){
	printf("nhap so phan tu cua mang: ");scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("arr[%d] ",i);scanf("%d",arr+i);
	}
}
void printarr(int arr[]){
	if(size==0){
		printf("mang chua duoc khai bao");
	} else {
		for(int i=0;i<size;i++){
			printf("arr[%d] = %d\n",i,arr[i]);
		}
	}
}
void addvaliu(int arr[]){
	int addindex, addvaliu;
	printf("nhap vi tri ban muon them: "); scanf("%d",&addindex);
	printf("nhap gia tri muon chen vao: ");scanf("%d",&addvaliu);
	if(addindex>size){
		addindex=size;
	} else if(addindex<0){
		addindex=0;
	}
	for(int i=size;i>=addindex;i--){
		arr[i]=arr[i-1];
	}
	arr[addindex]=addvaliu;
	size++;
}
void change(int arr[]){
	int poi; printf("nhap vitri thay the: ");scanf("%d",&poi);
	int poivl; printf("nhap giatri thay the: ");scanf("%d",&poivl);
	arr[poi]=poivl;
}
void dele(int arr[]){
	printf("nhap vi tri can xoa: "); scanf("%d",&del);
	for(int i=del;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
}
void sort(int arr[]){
	printf("	a. tang dan\n");
	printf("	b. giam dan\n");
	printf(" chon a(1) hay b(2) :"); scanf("%d",&choi);
	switch(choi){
		case 1:
			for(i=1;i<size;i++){
				j=i-1;
				key=arr[i];
				while( j>=0 && key<arr[j]){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=key;
			}
			break;
		case 2:for(i=1;i<size;i++){
				j=i-1;
				key=arr[i];
				while( j>=0 && key>arr[j]){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=key;
			}
			break;
	}
}

void seach(int arr[]){
	int start =0 , end = size-1; int check=0;
	printf("chon a nhap 1 chon b nhap 2\n"); scanf("%d",&choi2);
	printf("nhap gia tri can tim kiem: "); scanf("%d",&search);
	switch(choi2){
		
		case 1:
			for(int i=0;i<size;i++){
				if(search==arr[i]){
					printf("tai vi tri: %d\n",i);
					check=1;
					break;
				}
				if(check==0){
					printf("khong ton tai trong mang\n");
				}
			}
			break;
		case 2:
			while(end<start){
				int mid = start + (start + end)/2;
				if(search < arr[mid]){
					start = mid + 1;
				} else if(search > arr[mid]){
					end = mid -1;
				}
				if(search = arr[mid]){
					printf("tai vi tri: %d\n",mid);
						check = 1;
						break;
					}
			}
			if(check==0){
				printf("khong ton tai trong mang");
			}
			break;
	}
}
















