#include"stdio.h"
#include"stdlib.h" 
#include"string.h"

//�ֵ� wordList �дӵ��� beginWord �� endWord �� ת������ ��һ������������γɵ����� beginWord -> s1 -> s2 -> ... -> sk��
//
//ÿһ�����ڵĵ���ֻ��һ����ĸ��
// ���� 1 <= i <= k ʱ��ÿ�� si ���� wordList �С�ע�⣬ beginWord ����Ҫ�� wordList �С�
//sk == endWord
//������������ beginWord �� endWord ��һ���ֵ� wordList ������ �� beginWord �� endWord �� ���ת������ �е� ������Ŀ �����������������ת�����У����� 0 

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
    //��ѯendWord�ڴ����е�λ��
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
    //��ʼ���ڽӾ���
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
    //������� 
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
