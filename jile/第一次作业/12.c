#include<stdio.h>
#include<math.h>
int main(){
	int n_0=100,n_sqrt=0;
	for(n_0;n_0<=200;n_0++){
		int a=0;
		int n_sqrt=pow(n_0,0.5);
		int n_1=2;
		for(n_1;n_1<=n_sqrt;n_1++){
		if((n_0%n_1)==0){
			a=1;
		}	
			} 
		if(a!=1){
			printf("%10.d",n_0);
		}			
	} 
} 
