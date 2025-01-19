#include<string.h>

int main() {
	int prices[]={7,1,5,3,6,4};
	int pricesSize=6;
    int Dp[pricesSize];
    memset(Dp,0,sizeof(int)*pricesSize);
    int max=-1,min=-1;
    for(int i=0;i<pricesSize;i++){
        if(min==-1){
            min=prices[i];
            if(i){
                Dp[i]+=Dp[i-1];
            }
            continue;
        }
        if((prices[i]<min)&&(max==-1)){
            min=prices[i];
        }
        else if((prices[i]>min)&&(max==-1)){
            max=prices[i];
        }
        else if((max!=-1)&&(prices[i]>max)){
            max=prices[i];
        }
        else if((max!=-1)&&(prices[i]<=max)){
            Dp[i]+=max-min;
            min=prices[i];
            max=-1;
        }
        Dp[i]+=Dp[i-1];
    }
        if(max!=-1){
        Dp[pricesSize-1]+=max-min;
    }
    return Dp[pricesSize-1];
}
