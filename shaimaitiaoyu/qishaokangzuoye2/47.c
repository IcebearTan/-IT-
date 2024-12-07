#include<stdio.h>
int main(){
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int ji[10];int ou[10];int e=0;int o=0;int i;
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			ou[o]=a[i];
			o++;
		}else{ji[e]=a[i];
		e++;}}
		for(i=0;i<e;i++){
			printf(" %d",ji[i]);
		}
		for(i=0;i<o;i++){
			printf(" %d",ou[i]);
		}
		return 0;
}
