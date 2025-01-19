int uniquePaths(int m, int n) {
    int Dp[m][n];
    memset(Dp,0,sizeof(int)*m*n);
    for(int i=0;i<n;i++){
        Dp[0][i]=1;
    }
    for(int i=0;i<m;i++){
        Dp[i][0]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            Dp[i][j]=Dp[i-1][j]+Dp[i][j-1];
        }
    }
    return Dp[m-1][n-1];
}
