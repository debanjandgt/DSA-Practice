class Solution {
    int remove_duplicate(int A[],int N){
        int slow=0,fast=1;
        while(fast<A.length){
            if(A[slow]==A[fast])
            fast++;
            else if(A[slow]!=A[fast]){
                slow++;
                A[slow]=A[fast];
                fast++;
            }
        }
        return(slow+1);
    }
}
