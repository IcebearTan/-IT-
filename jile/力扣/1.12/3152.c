#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
int isAS(int* nums, int numsSize) {
    if(numsSize==1)return 1;
    int a=nums[0]%2;
    for(int i=1;i<numsSize;i++){
        a=(a+1)%2;
        if((nums[i]%2)==a)continue;
        else{
            return 0;
        }
    }
    return 1;
}
int main() {
	int nums[]={4,3,1,6};
	int numsSize=4; int queries[2][2]={{0,2},{2,3}}; 
	int queriesSize=2;
//    char *ans=(char*)malloc(queriesSize*sizeof(char));
    char ans[2]={0};
    int mem[numsSize];
    memset(mem,0,sizeof(int)*numsSize);
    for(int i=0;i<numsSize-1;i++){
        if(isAS(nums+i,2)){
                    mem[i+1]=mem[i];
        }
        else{
            mem[i+1]=mem[i]+1;

        }
    }
    for(int i=0;i<queriesSize;i++){
        if(mem[queries[i][0]]==mem[queries[i][1]])ans[i]=1;
        else ans[i]=0;
    }
//    *returnSize=queriesSize;
    return ans;
}
