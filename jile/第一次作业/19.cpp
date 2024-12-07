#include<stdio.h>
int main(){
	int n0=2,n=0;
	for(n0;n0<=1000;n0++){
		int m=1;
		int arr[n0];
		for(n=0;n<n0;n++){
			arr[n]=0;
		}
		arr[0]=1;
		int ingredient=2;
		for(ingredient;ingredient<n0;ingredient++){
		    if(n%ingredient==0){
			    arr[m]=ingredient;
			    m++;
			   /* if((n/ingredient)!=ingredient){
			    	
				}*/
				arr[m]=(n/ingredient);
				m++;
			    }
			}
			
	int sum=0;
	int time=0;
	for(time;time<=(m-1);time++){
		sum+=arr[time];
	}
	if(((sum+1)/2)==n0){
	printf("%d ",n0);
	}
	}
return 0;
}
