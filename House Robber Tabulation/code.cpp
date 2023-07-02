class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int n=nums.size();
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
          int take=nums[i];
          if(i-2 < 0)
          take+=0;
          else
          take+=dp[i-2];

          int nonTake=0+dp[i-1];

          dp[i]=max(take,nonTake);
        }
      return dp[n-1];
    }
};
