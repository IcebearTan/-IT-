#include<stdio.h>
#include<stdlib.h>
//����һ�����շǵݼ�˳�����е��������� nums����һ��Ŀ��ֵ target�������ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ�á�
//
//��������в�����Ŀ��ֵ target������ [-1, -1]��
//
//�������Ʋ�ʵ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨���������


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

