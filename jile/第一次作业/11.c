#include<stdio.h>
int main(){
	int n=1,sum_0=1,sum_1=1,sum_2=1;
	for(n;n<=40;n++){
		if(n>=1&&n<=2){
			sum_1=1,sum_2=1;
		}
		else{
		sum_0=sum_2;
		sum_2=sum_1+sum_2;
		sum_1=sum_0;
		} 
		printf("%10.d",sum_2);
	}
} 
