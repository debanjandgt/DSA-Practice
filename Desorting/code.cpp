#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases)
    {
        cases--;
        int s;
        cin >> s;
        vector<int> vec;
        for(int i=0;i<s;i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        int mini_diff=INT_MAX;
        int t=0;
        for(int i=0;i<s-1;i++)
        {
            if(vec[i+1]<vec[i])
            {
                cout << 0 << endl;
                t=1;
                break;
            }
            int diffy=vec[i+1]-vec[i];
            mini_diff=min(mini_diff,diffy);
        }
        if(t==0)
        cout << mini_diff/2 + 1 << endl;
    }
}
