#include<stdio.h>
#include<stdlib.h>
//给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
//
//如果数组中不存在目标值 target，返回 [-1, -1]。
//
//你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题


//int main(){
//	int nums[] = {7,7,8,8,10};
//	int target = 8,numsSize=5;
//int m=0,n=0;
//    int *arr=malloc(8);
//    int check=0;
//	for(n;n<numsSize;n++){
//		if(nums[n]==target){
//			break;
//			}
//	}
//    m=n;
//    for(m;m<numsSize;m++){
//	    if((m==(numsSize-1))&&nums[m]==target){
//            check=1;
//		break;
//		}
//		else if(nums[m]!=target){
//		m--;
//        check=1;
//		break;
//		}
//	}
//    if(nums==NULL){
//        return NULL;
//    }
//		if(!check){
//			*arr=-1;
//			*(arr+1)=-1;
//		}
//		else{
//            next:
//			*arr=n;
//			*(arr+1)=m;
//		}
//		printf("%d %d",arr[0],arr[1]);
//		return 0;
//}
//



 int find_le(int*nums,int size,int target){
    int l=-1,r=size;
    while((l+1)!=r){
        int mid=(r+l)/2;
        if(nums[mid]<target){
            l=mid;
        }
        else {
            r=mid;
        }
    }
    return r;
 }
 
 int find_ri(int*nums,int size,int target){
    int l=-1,r=size;
    while((l+1)!=r){
        int mid=(r+l)/2;
        if(nums[mid]<=target){
            l=mid;
        }
        else {
            r=mid;
        }
    }
    return l;
 }
int main(){
	int nums[] = {7,7,8,8,10};
	int target = 8,numsSize=5;
int left,right;
left =find_le(nums,numsSize,target);
right=find_ri(nums,numsSize,target);
int *tar=(int*)calloc(2,4);
//*returnSize=2;
    if(nums==NULL){
    tar[0]=-1;
    tar[1]=-1; 
    return tar;
}
if(left>right){
    tar[0]=-1;
    tar[1]=-1; 
}
else {
    tar[0]=left;
    tar[1]=right;
}
		printf("%d %d",tar[0],tar[1]);
		return 0;
}

