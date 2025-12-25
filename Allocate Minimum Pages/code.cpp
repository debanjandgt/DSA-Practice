class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        long long sum = 0;
        long long maxi= 0;
        for(int i =0 ;i< arr.size();i++)
        {
            maxi=max(maxi,1LL*arr[i]);
            sum+=arr[i];
        }
        long long low=maxi,high=sum;
        long long ans=-1;
        while(low <= high)
        {
            long long midi=(low+high)/2;
            long long cnt = 1,sumArr= 0 ;
            for(int i=0;i<arr.size();i++)
            {
                sumArr += arr[i];
                if(sumArr > midi)
                {
                    cnt++;
                    sumArr=arr[i];
                }
            }
            if(cnt <= k)
            {
                ans = midi;
                high=midi-1;
            }
            else
            low=midi+1;
        }
        return k>arr.size() ? -1:ans;
    }
};
