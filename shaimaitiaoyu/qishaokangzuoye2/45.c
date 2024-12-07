#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(int i=0;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
		
	}
	printf("%d",max);
	return 0;
}
