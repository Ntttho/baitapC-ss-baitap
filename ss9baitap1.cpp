#include<stdio.h>
#include<string.h>
int main(){
	char array[100];
	int n; printf("nhap so phan tu ban muon nhap: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("in mang ban dau:\n" );
	for(int i=0;i<n;i++){
		printf("phan tu thu[%d]: %d\n",i,array[i]);
	}
	int l = strlen(array);
	int addindex, addvalue; 
	printf("nhap vi tri muon them: ");scanf("%d",&addindex);
	printf("nhap phan tu ban muon thay the: ");scanf("%d",&addvalue);
	if(addindex>=l){
		addindex=0;
	} else if(addindex>l){
		addindex=l;
	}
	l++;
	for(int i=addindex; i<l;i++){
		array[i+1]=array[i];
	}
	array[addindex]=addvalue;
	printf("phan tu cua mang luc sau la: \n");
	for(int i=0;i<l;i++){
		printf("phan tu thu[%d]: %d\n",i,addvalue);
	}
	return 0;
}
