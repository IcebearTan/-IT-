#include<stdio.h> 

int main() {
	int pairs[][2]={{-10,-8},{8,9},{-5,0},{6,10},{-6,-4},{1,7},{9,10},{-4,7}};
	int pairsSize=8;
    int sum=0;
    int p1[2]={0},p2[2]={0};
    int *temp1=p1;
    int *temp2=p2;
    while(1){
    int key=0;
    for(int j=0;j<pairsSize;j++){
        if(pairs[j][0]>temp1[0]){
            temp2[0]=pairs[j][0];
            temp2[1]=pairs[j][1];
            sum++;
            key=1;
            break;
        }
    }
    if(!key){
        break;
    }
    for(int i=0;i<pairsSize;i++){
        if((pairs[i][1]<temp2[1])&&(pairs[i][0]>temp1[0])){
            temp2[0]=pairs[i][0];
            temp2[1]=pairs[i][1];
        }
    }
    int *t=temp1;
    temp1=temp2;
    temp2=t;
    }
    return sum;
}
