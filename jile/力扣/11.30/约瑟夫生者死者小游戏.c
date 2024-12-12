#include"stdio.h"
int strike=9;
int index[30]={0};

void check_out(int *a,int arr[]){
	for(int m=0;m<15;m++){
		if(*a==0){
			break;
		}
		if(*a==arr[m]){
			(*a)+=1;
			check_out(a,arr);
		}
	}
	return;
}

int main(){
	int n=0,pace=0;
	for(n;n<15;n++){
		for(int m=1;m<=strike;m++){
			if(pace>=30){
			pace-=30;
			}
			pace+=1;
			check_out(&pace,index);
		}
		index[n]=pace;
	}
	for(int m=0;m<15;m++){
		printf("%d ",index[m]);
	}
	return 0;
} 
