#include<stdlib.h> 
#include<string.h>
#include<stdio.h>
#include<math.h>
int main() {
	int n=10;
    long long int Dp[n+1];
    memset(Dp,0,sizeof(int)*(n+1));
    Dp[1]=1;
    int cur_2=1,cur_3=1,cur_5=1;
    for(int i=2;i<=n;i++){
        Dp[i]=fmin(fmin(Dp[cur_2]*2,Dp[cur_3]*3),Dp[cur_5]*5);
        if(Dp[i]==(Dp[cur_2]*2))cur_2++;
        if(Dp[i]==(Dp[cur_3]*3))cur_3++;
        if(Dp[i]==(Dp[cur_5]*2))cur_5++;
    }
    return (int)Dp[n];
}
