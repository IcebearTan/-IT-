int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
    if(obstacleGrid[0][0]==1)return 0;
    int Dp[obstacleGridSize][obstacleGridColSize[0]];
    memset(Dp,0,sizeof(int)*obstacleGridSize*obstacleGridColSize[0]);
    Dp[0][0]=1;
    for(int i=0;i<obstacleGridSize;i++){
        for(int j=0;j<obstacleGridColSize[0];j++){
            if((i==0)&&(j==0))continue;
            if(obstacleGrid[i][j])Dp[i][j]=0;
            else if(i==0)Dp[i][j]=Dp[i][j-1];
            else if(j==0)Dp[i][j]=Dp[i-1][j];
            else Dp[i][j]=Dp[i-1][j]+Dp[i][j-1];
        }
    }
    return Dp[obstacleGridSize-1][obstacleGridColSize[0]-1];
}

