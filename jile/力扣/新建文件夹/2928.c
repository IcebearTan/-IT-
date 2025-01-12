#include<stdio.h> 
int sum=0;
int DFS(int *children,int cur,int rest,int limit){
    if(rest==0){
        sum++;
        return 0;
    }
        if(children[cur]<limit){
            int temp[3]={children[0],children[1],children[2]};
            temp[cur]+=1;
            DFS(temp,cur,rest-1,limit);
        }
        if(cur<2){
            DFS(children,cur+1,rest,limit);
        }
        return 0;
}

int main() {
	int n=1;
	 int limit=1;
    int children[3]={0};
    DFS(children,0,n,limit);
    return sum;
}
