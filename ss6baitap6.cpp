#include<stdio.h>
int main(){
	for(int i=1;i<=100;i++){
		if(i%15==0){
			printf("fizzbuzz ");
		} else if(i%3==0){
			printf("buzz ");
		}else if(i%5==0){
			printf("fizz ");
		} else printf("%d ",i);
	}
	return 0;
}
