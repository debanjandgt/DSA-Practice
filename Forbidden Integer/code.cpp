#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while(cases)
    {
        cases--;
        int n,x,k;
        cin >> n >> k >> x;
        if(x != 1)
        {
            int i=1,t=1;
            vector<int> vec;
            cout << "YES" << endl;
            cout << n << endl;
            while(t<=n)
            {
                cout << i << " " ;
                t++;
            }
            cout << endl;
           continue;
        }
        else
        {
            int t=0;
           if(n%2 == 0 && k>=2 )
           {
               vector<int> vec;
               cout << "YES" << endl;
               t=1;
               cout << n/2 << endl;
               int t=1;
               while(t <= (n/2))
               {
                    cout << 2 << " " ;
                   t++;
               }
               cout << endl;
               continue;
           }
           else if(n%2 == 1 && k>= 3)
           {
               int i=3;
               t=1;
               cout << "YES" << endl;
               vector<int> ans;
               ans.push_back(3);
               n-=3;
               while(n>0)
               {
                   ans.push_back(2);
                   n-=2;
               }
               cout << ans.size() << endl;
               for(int i=0;i<ans.size() ;i++)
               {
                   cout << ans[i] << " " ;
               }
               cout << endl;
               continue;
           }
           else if(t==0)
           cout << "NO" << endl;
           
        }
        
    }
}
