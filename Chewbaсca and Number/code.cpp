#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long x;
        cin >> x;
        if(x <=9)
        cout << x << endl;
        else
        {
        string num=to_string(x);
        for(int i=0;i<num.size();i++)
        {
            if(i == 0 && num[i] == '9')
            continue;
            char ch1=num[i];
            char ch2=num[i];
            int v1=ch1-'0';
            int v2=ch2-'0';
            if(v1 > (9-v2))
            {
                v2=9-v2;
                char d=v2+'0';
                num[i]=d;
            }
        }
        cout << num << endl;
        }
}
