#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main() {
	int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matrixSize=3;
	int matrixColSize[3]={3,3,3};
	int a;
	int *returnSize=&a;
//    int *re_matrix=malloc(sizeof(int)*(matrixSize)*matrixColSize[0]);
//    memset(re_matrix,0,sizeof(re_matrix));
    int re_matrix[9];
    int direction[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int index=0,row_index=0,cow_index=0;
    int direct=0;
    re_matrix[index++]=matrix[cow_index][row_index];
    matrix[cow_index][row_index]=0;
    while(index<((matrixSize)*matrixColSize[0])){
        while((((cow_index+direction[direct][0])>=0)&&((cow_index+direction[direct][0])<matrixSize))&&(((row_index+direction[direct][1])>=0)&&((row_index+direction[direct][1])<matrixColSize[0]))&&(matrix[cow_index+direction[direct][0]][row_index+direction[direct][1]])){
            cow_index+=direction[direct][0];
            row_index+=direction[direct][1];
            re_matrix[index++]=matrix[cow_index][row_index];
            matrix[cow_index][row_index]=0;
        }
        direct=(direct+1)%4;
    }
    *returnSize=(matrixSize)*matrixColSize[0];
    return re_matrix;
}
