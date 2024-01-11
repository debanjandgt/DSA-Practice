
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int cases;
    cin >> cases;
    while(cases)
    {
        cases--;
        int a, b, sx, sy, d;
        cin >> a >> b >> sx >> sy >> d;
        if(sx-d > 1 && sy+d < b)
        cout << a+b-2 << endl;
        else if(sy-d > 1 && sx+d < a)
        cout << a+b-2 << endl;
        else cout << -1 << endl;
    }
}
