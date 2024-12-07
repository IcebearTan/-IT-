#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,6,8,9,6,5,9};
	double sum=0;double pinjun=0;
	for(int i=0;i<10;i++){
		sum=sum+a[i];
	}
	pinjun=sum/10;
	printf("pinjun=%lf",pinjun);
	return 0;
	
}
