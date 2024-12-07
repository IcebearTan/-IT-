#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int copy[10];
	for(int i=0;i<10;i++){
		copy[i]=a[i];
	}for(int i=0;i<10;i++){
	printf(" %d",copy[i]);}
	return 0;
}
