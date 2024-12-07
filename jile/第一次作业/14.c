#include<stdio.h>
int main(){
	int a,n;
	scanf("%d",&a);
		printf("%d=",a);
	for(n=2;n<a;n++){
		if((a%n)==0){
			printf("%d*",n);
			a=a/n;
			n=1;
		}
	}
	printf("%d",a);
//	printf("\b");
//	printf(" ");
return 0; 
} 

