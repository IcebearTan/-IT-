#include<stdio.h>
int main(){
	int a,b,G_C_divisor;
	scanf("%d%d",&a,&b);
	int mini=(a>=b)?b:a;
	for(G_C_divisor=mini;G_C_divisor>=1;G_C_divisor--){
		if((a%G_C_divisor==0)&&(b%G_C_divisor==0)){
			break;
		}
	}
	int bei_su1=a/G_C_divisor;
	int bei_su2=b/G_C_divisor;
	int L_C_multiple=bei_su1*bei_su2*G_C_divisor;
	printf("��С��Լ��Ϊ��%d\n��󹫱���Ϊ��%d",G_C_divisor,L_C_multiple);
	return 0; 
} 
