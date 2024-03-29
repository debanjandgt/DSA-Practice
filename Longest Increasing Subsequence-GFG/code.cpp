class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int> ans;
       ans.push_back(a[0]);
       for(int i=1;i<n;i++)
       {
           if(a[i] > ans.back())
           ans.push_back(a[i]);
           else
           {
               auto it=lower_bound(ans.begin(),ans.end(),a[i]);
               int index=it-ans.begin();
               ans[index]=a[i];
           }
       }
       return ans.size();
    }
};
