long long numberOfRightTriangles(int** grid, int gridSize, int* gridColSize) {
    // int temp[gridSize][gridColSize[0]];
    // memset(temp,0,sizeof(int)*gridSize*gridColSize[0]);
    long long int sum=0;
    int sum_row[gridSize];
    memset(sum_row,0,sizeof(sum_row));
    int sum_col[gridColSize[0]];
    memset(sum_col,0,sizeof(sum_col));
    for(int j=0;j<gridSize;j++){
        int sum=0;
    for(int i=gridColSize[0]-1;i>=0;i--){
        sum=(grid[j][i]==1)?sum+1:sum;
    }
    sum_row[j]=sum;
    }
    for(int j=0;j<gridColSize[0];j++){
        int sum=0;
    for(int i=0;i<gridSize;i++){
        sum=(grid[i][j]==1)?sum+1:sum;
    }
    sum_col[j]=sum;
    }
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[0];j++){
            if(grid[i][j]){
                sum+=(sum_col[j]-1)*(sum_row[i]-1);
            }
        }
    }
    return sum;
}
