#include <bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases)
	{
	    cases--;
	    int N,K,L;
	    cin >> N >> K >> L;
	    vector<pair<int,int>> s;
	    vector<int> v;
	    int maxiL=0;
	    for(int i=0;i<N;i++)
	    {
	        int a,b;
	        cin >> a >> b;
	        if(b== L)
	        {
	            s.push_back(make_pair(a,b));
	            v.push_back(a);
	        }
	    }
	    int sum=0;
	    if(s.size() >= K)
	    {
	    
	    sort(v.begin(),v.end());
	    int j=v.size()-1;
	    while(K>0)
	    {
	        sum+=v[j];
	        K--;
	        j--;
	    }
	    }
	   if(sum != 0 )
	   cout << sum << endl;
	   else
	   cout << -1 << endl;
	    
	}
}
