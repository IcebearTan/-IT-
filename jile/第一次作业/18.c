#include<stdio.h>
#include<math.h>
int main(){
	int n=0,base=0,m=0,sum=0;
	scanf("%d%d",&base,&n);
	for(m;m<n;m++){
		int cir=0;
		for(cir;cir<=m;cir++){
			sum+=base*pow(10,cir);
		}
	}
	printf("%d",sum);
}
