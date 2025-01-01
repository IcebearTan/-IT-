int com(const void*p,const void *q){return *(int*)p-*(int *)q;}
int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums,numsSize,4,com);
    int min=66566;
    for(int i=0;i<numsSize;i++){
        int p1=i+1,p2=numsSize-1;
        while(p1<=(p2-1)){
            if(abs(nums[i]+nums[p1]+nums[p2]-target)<abs(min-target)){
                min=nums[i]+nums[p1]+nums[p2];
            }
            if((nums[i]+nums[p1]+nums[p2]-target)>0){
                p2--;
            }
            else if((nums[i]+nums[p1]+nums[p2]-target)<0){
                p1++;
            }
            else return target;
        }
    }
    return min;
}
