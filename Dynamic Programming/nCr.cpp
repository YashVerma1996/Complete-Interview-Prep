// Returns nCr % p 
int nCrModp(int n, int r) 
{
    long long dp[n+1][n+1];
    
    if(r > n)
    {
        return 0;
    }
    
    dp[0][0] = 1;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            dp[i][j] = 0;
            
            if(j >= 0 && j < i)
            {
                dp[i][j] = (dp[i][j] + dp[i-1][j])%p;
            }
            
            if(j-1 >= 0 && j-1 < i)
            {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1])%p;
            }
            
        }
    }
    
    return dp[n][r];
}
