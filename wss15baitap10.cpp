#include<stdio.h>
#include<string.h>
int main(){
	char arr[]="abcdb";
	int size = strlen(arr);
	while(size>0){
		int count =0;
		char ch=arr[0];
		for(int i=0;i<size;i++){
			if(ch == arr[i]){
				count++;
				for(int j=i;j<size;j++){
					arr[j]=arr[j+1];
				}
				size--;
			}
		}
		printf("%c : %d\n",ch,count);
	}
}
