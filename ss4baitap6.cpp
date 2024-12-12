#include<stdio.h>
int main(){
	int dau, cuoi;
	scanf("%d %d",&dau,&cuoi);
	int sodien = cuoi - dau;
	int tiendien;
	if(sodien>0 && sodien<50){
		tiendien = sodien*10000;
	} else if(sodien>=50 && sodien <100){
		tiendien = sodien*15000;
	} else if(sodien>=100&&sodien<150){
		tiendien=sodien*20000;
	} else if(sodien>=150 &&sodien<200){
		tiendien=sodien*25000;
	} else tiendien = sodien*30000;
	printf("tien dien thang nay la: %d", tiendien);
	return 0;
}
