class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
                vector<vector<vector<int>>> dp(price.size()+1, vector<vector<int>>(2, vector<int>(3, 0)));
            for(int ind=price.size()-1;ind>=0;ind--)
    {
        for(int buy=1;buy>=0;buy--)
        {
            for(int cap=1;cap<=2;cap++)
            {
                int profit;
                if(buy == 1)
                {
                    dp[ind][buy][cap]=max(-price[ind]+dp[ind+1][0][cap],
                    0+dp[ind+1][1][cap]);
                }
                else
                {
                    dp[ind][buy][cap]=max(+price[ind]+dp[ind+1][1][cap-1],
                    0+dp[ind+1][0][cap]);
                }
            }
        }
    }
    return dp[0][1][2];
        }
};
