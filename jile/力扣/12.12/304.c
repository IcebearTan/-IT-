


typedef struct {
    int **sum_matrix;
} NumMatrix;


NumMatrix* numMatrixCreate(int** matrix, int matrixSize, int* matrixColSize) {
    NumMatrix* ret=malloc(sizeof(NumMatrix));
    ret->sum_matrix=malloc(sizeof(int*)*matrixSize);
    for(int i=0;i<matrixSize;i++){
        ret->sum_matrix[i]=malloc(sizeof(int)*(matrixColSize[i]+1));
        ret->sum_matrix[i][0]=0;
        for(int j=1;j<=matrixColSize[i];j++){
            ret->sum_matrix[i][j]=matrix[i][j-1]+ret->sum_matrix[i][j-1];
        }
    }
    return ret;
}

int numMatrixSumRegion(NumMatrix* obj, int row1, int col1, int row2, int col2) {
    int sum=0;
    for(int i=row1;i<=row2;i++){
        sum+=obj->sum_matrix[i][col2+1]-obj->sum_matrix[i][col1];
    }
    return sum;
}

void numMatrixFree(NumMatrix* obj) {

}

/**
 * Your NumMatrix struct will be instantiated and called as such:
 * NumMatrix* obj = numMatrixCreate(matrix, matrixSize, matrixColSize);
 * int param_1 = numMatrixSumRegion(obj, row1, col1, row2, col2);
 
 * numMatrixFree(obj);
*/
