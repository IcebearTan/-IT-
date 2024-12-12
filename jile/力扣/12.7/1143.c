#include<stdio.h> 
#include<string.h>
int main() {
	char text1[]="abcde";
	char text2[]="ace";
    int length1=strlen(text1);
    int length2=strlen(text2);
    int Dp[length1+1][length2+1];
    memset(Dp,0,sizeof(Dp));
    int cur1=1;
    for(cur1;cur1<=length1;cur1++){
        int cur2=1;
        char c1=text1[cur1-1];
        for(cur2;cur2<=length2;cur2++){
            char c2=text2[cur2-1];
            if(c1==c2){
                Dp[cur1][cur2]=Dp[cur1-1][cur2-1]+1;
            }
            else{
                Dp[cur1][cur2]=(Dp[cur1-1][cur2]>Dp[cur1][cur2-1])?Dp[cur1-1][cur2]:Dp[cur1][cur2-1];
            }
        }
    }
    return Dp[length1-1][length2-1];
}
