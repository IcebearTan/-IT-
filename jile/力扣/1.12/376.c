#include<stdio.h> 
#include<stdlib.h>
int main() {
    if(numsSize==1)return 1;
    else if(((numsSize==2)&&(nums[0]!=nums[1])))return 2;
    else if(((numsSize==2)&&(nums[0]==nums[1])))return 1;
    int sum=0,key;
    int i=0;
        for(i;i<numsSize-1;i++){
            if(nums[i]==nums[i+1]){
                sum++;
                continue;
            }
            else{
                key=(nums[i+1]-nums[i])/abs(nums[i+1]-nums[i]);
                break;
            }
        }
    for(i++;i<numsSize-1;i++){
        key=-key;
        if(nums[i+1]==nums[i]){
            key=-key;
            sum++;
            continue;
        }
        else if((nums[i+1]-nums[i])/(abs(nums[i+1]-nums[i]))==key)continue;
        else{
            key=-key;
            sum++;
        }
    }
    return numsSize-sum;

}
