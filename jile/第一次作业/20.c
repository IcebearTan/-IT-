#include<stdio.h>
int main(){
	int n,bounce;
	double h,sum_h=0;
	scanf("%lf%d",&h,&bounce);
	for(n=1;n<=bounce;n++){
		sum_h+=(3.0/2)*h;
		h/=2; 
	}
	sum_h-=h;
	printf("��������%lf�ף���%d�η����߶�Ϊ��%lf",sum_h,bounce,h);
}
