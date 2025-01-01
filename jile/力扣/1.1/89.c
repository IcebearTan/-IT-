/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* grayCode(int n, int* returnSize) {
    int Size=pow(2,n);
    *returnSize=Size;
    int *num=malloc(sizeof(int)*Size);
    int index=1;
    num[0]=0;
    for(int i=1;i<=n;i++){
        int index_n=index;
        for(int j=1;j<=index_n;j++){
            num[index++]=num[index_n-j]+pow(2,i-1);
        }
    }
    return num;
}
