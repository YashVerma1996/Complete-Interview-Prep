int jump(int a[] , int n , vector<int>&dp)
{
    if(n==1) // there is only 0 ways to reach the 1st node
        return 0;
    if(dp[n] != -1)
        return dp[n];

    int ans = INT_MAX;
    for(int i=0;i<=n-2;i++)
    {
        if(i+a[i] >=n-1)
        {
            int sub_ans = jump( a , i+1 ,dp);
            if(sub_ans != INT_MAX)
                ans = min ( ans , sub_ans +1 );
        }
    }   
    return dp[n] = ans ;
}


int minimumjumps(int arr[],int n)
{
    vector<int>dp(n+10,-1);
    int ans = jump(arr,n,dp);
    if(ans == INT_MAX) ans = -1;
    return ans;
}
