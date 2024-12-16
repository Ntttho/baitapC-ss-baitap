#include<stdio.h>
int main(){
	int chan=0,le=0;
	for(int i=1;i<=5;i++){
		int a;scanf("%d",&a);
		if(a%2==1){
			le++;
		} else chan++;
	}
	printf("so so le: %d\nso so chan:%d",le,chan);
	return 0;
}
