#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases)
    {
        cases--;
        int n,m;
        cin >> n >> m;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        for(int j=0;j<m;j++)
        {
            int a;
            cin >> a;
            pq.pop();
            pq.push(a);
        }
        long long sum=0;
        while(!pq.empty())
        {
            int a=pq.top();
            sum+=a;
            pq.pop();
        }
        cout << sum << endl;
    }
}
