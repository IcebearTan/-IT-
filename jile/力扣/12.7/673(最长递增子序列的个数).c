#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int* nums={2,5,6,1,8};
int numsSize=5;
int dp[numsSize];
memset(dp, 0, numsSize * sizeof(int));
int dp_n[numsSize];
memset(dp_n, 0, numsSize * sizeof(int));
int max=0,sum=0;
for (int i = 0; i < numsSize; i++) {
    dp[i] = 1;
    dp_n[i] = 1;
    for (int j = 0; j < i; j++) {
        if (nums[i] > nums[j]) {
            if ((dp[j] + 1) > dp[i]) {
                dp[i] = dp[j] + 1;
                dp_n[i] = dp_n[j];
            }
            else if ((dp[j] + 1) == dp[i]) {
                dp_n[i] += dp_n[j];
            }
        }
   
    }
    if (dp[i] > max) {
        max = dp[i];
        sum = dp_n[i];
    }
    else if (dp[i] == max) {
        sum += dp_n[i];
    }
}
return sum;
}
