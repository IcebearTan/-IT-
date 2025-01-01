#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int process(char *memory,int used,int cur,int desiredTotal,int maxChoosableInteger){
    if(memory[used]!=0)return memory[used];
    else{
        for(int i=0;i<maxChoosableInteger;i++){
            if(((used>>i)&1)==0){
                if((i+cur+1)>=desiredTotal){
                    return memory[used]=1;
                }
                else{
                    if(process(memory,used|(1<<i),cur+i+1,desiredTotal,maxChoosableInteger)==-1){
                        return memory[used]=1;
                    }
                }
            }
        }
        return memory[used]=-1;
    }
}


int main(){
    int maxChoosableInteger = 10, desiredTotal = 31;
    if ((1 + maxChoosableInteger) * maxChoosableInteger / 2 < desiredTotal) return -1;
    char memory[1<<20];
    memset(memory,0,1<<20);
    return process(memory,0,0,desiredTotal,maxChoosableInteger)==1;
}
