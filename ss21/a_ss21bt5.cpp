#include<stdio.h>
#include<stdlib.h>
#define max 100
int main(){
	// ghi file
	FILE *f;
	int n; printf("nhap so luong dong ban muon them vao file: "); scanf("%d",&n); fflush(stdin);
	f = fopen("bt05.txt","w");
	if(f==NULL){
		printf("loi tao file\n");
		exit(1);
	}
	for(int i=0; i<n; i++){
		char read[max];
		printf("dong %d: ",i+1); 
		fgets(read, max, stdin);
		fputs(read, f);
	}
	fclose(f); printf("ghi file thanh cong\n");
	// doc file
	f = fopen("bt05.txt","r");
	if(f==NULL){
		printf("loi tao file!\n");
		exit(1);
	}
	char read[max];
	while( fgets(read, max, f) != 0){
		printf("%s",read);
	}
	// fgets tra ve 1 gia tri con tro char, neu khong con gi trong file de no doc thi tu dinh nghia la 0 hoac NULL
	fclose(f);
	printf("doc file thanh cong\n");
}
