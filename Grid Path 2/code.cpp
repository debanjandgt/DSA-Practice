class Solution {
  public:
  int mod=1e9+7;
    int solve(vector<vector<int>> &grid,vector<vector<int>>& dp,
    int m,int n)
    {
        if(m == 0 && n == 0)
        return 1;
        if(m<0 || n < 0)
        return 0;
        if(dp[m][n] != -1)
        return dp[m][n];
        int up=0,left=0;
        if(m > 0 && grid[m-1][n] != 1)
        up=solve(grid,dp,m-1,n);
        if(n>0 && grid[m][n-1] != 1)
        left=solve(grid,dp,m,n-1);
        return dp[m][n]=(up%mod+left%mod)%mod;
    }
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        int mm=grid.size();
     int nm=grid[0].size();
     if(grid[mm-1][nm-1] == 1)
     return 0;
     vector<vector<int>> dp(mm,vector<int>(nm,-1));
     
     return solve(grid,dp,mm-1,nm-1); 
    }
};
