#include<stdio.h>
#include<math.h> 
int main(){
	int a,num_1,num_2,num_3;
	for(a=100;a<1000;a++){
		num_1=a%10;
	    num_2=(a/10)%10;
	    num_3=(a/100)%10;
	    if((pow(num_3,3)+pow(num_2,3)+pow(num_1,3))==a){
		    printf("%d\n",a);
	}
	
	}
}
 
