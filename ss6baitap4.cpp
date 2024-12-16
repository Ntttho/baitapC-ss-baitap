#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c; scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		float res=-c/b;
		printf("nghiem cua phuong trinh la: %.3f",res);
	} else {
		float denta=pow(b,2)-4*a*c;
		if(denta==0){
			float res=-(b/(2*a));
			printf("phuong trinh co nghiem kep: &.3f",res);
		} else if(denta<0){
			printf("phuong trinh vo nghiem");
		} else if(denta>0){
			float res1=(-b-sqrt(denta))/(2*a);
			float res2=(-b+sqrt(denta))/(2*a);
			printf("phuong trinh co hai nghiem phan biet la: %.3f %.3f",res1,res2);
		}
	}
	return 0;
}
