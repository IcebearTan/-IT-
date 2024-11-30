#include<stdio.h>
int main(){
    int n=10;
    int arr[10]={0};
    arr[0]=1;
    for(int m=0;m<n;m++){
        
        for(int r=m;r>0;r--){
            arr[r]=arr[r-1]+arr[r];
        }
        for(int t=0;t<=m;t++){
            printf("%d ",arr[t]);
        }
        printf("\n");
    }
    return 0;
}
