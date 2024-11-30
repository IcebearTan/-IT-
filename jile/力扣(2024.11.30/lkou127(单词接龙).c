#include"stdio.h"
#include"stdlib.h" 
#include"string.h"

//字典 wordList 中从单词 beginWord 到 endWord 的 转换序列 是一个按下述规格形成的序列 beginWord -> s1 -> s2 -> ... -> sk：
//
//每一对相邻的单词只差一个字母。
// 对于 1 <= i <= k 时，每个 si 都在 wordList 中。注意， beginWord 不需要在 wordList 中。
//sk == endWord
//给你两个单词 beginWord 和 endWord 和一个字典 wordList ，返回 从 beginWord 到 endWord 的 最短转换序列 中的 单词数目 。如果不存在这样的转换序列，返回 0 

void en_l(int *line,int *end,int index){
    line[*end]=index;
    (*end)++;
}
void qu_l(int *line,int *start){
    (*start)++;
}
void find(int *father,int index,int *sum){
    if(father[index]==index){
        (*sum)++;
    }
    else{
        (*sum)++;
        find(father ,father[index],sum);
    }
}
int main(){
//	char* beginWord, char* endWord, char** wordList, int wordListSize
    char beginWord[] = "a";
	char endWord[] = "c";
	int beginWord_length=strlen(beginWord);
	char wordList[][2] = {"a","b","c"};
	int wordListSize=3;
    int goal=-1;
    //查询endWord在词链中的位置
    for(int i=0;i<wordListSize;i++){
        int count=0;
        for(int j=0;j<beginWord_length;j++){
            if(wordList[i][j]==endWord[j]){
                count++;
            }
        }
        if(count==beginWord_length){
            goal=i;
        }
    }
    if(goal==-1){
        return 0;
    }

    int matrix[wordListSize][wordListSize];
    memset(matrix,0,wordListSize*wordListSize*sizeof(int));
    //初始化邻接矩阵
    for(int i=0;i<wordListSize;i++){
        for(int l=0;l<wordListSize;l++){
            int count=0;
            for(int j=0;j<beginWord_length;j++){
                if(wordList[i][j]!=wordList[l][j]){
                    count++;
                }
            }
            if(count==1){
                matrix[i][l]=1;
            }
        }
    }
    int sum=0;
    int line[wordListSize];
    memset(line,0,wordListSize*sizeof(int));
    int start=0,end=0;
    int checked[wordListSize];
    memset(checked,0,wordListSize*sizeof(int));
    int father[wordListSize+1];
    memset(father,0,(wordListSize+1)*sizeof(int));
    father[wordListSize]=wordListSize;
    //广度搜索 
    for(int l=0;l<wordListSize;l++){
        father[l]=l;
        int count=0;
        for(int j=0;j<beginWord_length;j++){
            if(beginWord[j]!=wordList[l][j]){
                count++;
            }
        }
        if(count==1){
            en_l(line,&end,l);
            checked[l]=1; 
            father[l]=wordListSize;
            if(l==goal){
                find(father,goal,&sum);
                return sum;
            }
        }
    }
    while(start!=end){
        int v=line[start];
        qu_l(line,&start);
        for(int i=0;i<wordListSize;i++){
            if((matrix[v][i]==1)&&!checked[i]){
                father[i]=v;
                en_l(line,&end,i);
                checked[i]=1;
                if(i==goal){
                find(father,goal,&sum);
                }
            }
        }
    }    
    return 0;
}
