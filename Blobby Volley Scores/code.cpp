#include <iostream>
using namespace std;

int main() {
    int cases;
    cin>> cases;
    while(cases)
    {
        cases--;
        int n;
        int alice=0,bob=0;
        string s;
        char server='A';
        cin >> n >> s;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(s[i] == 'A' && server=='A')
            alice++;
            else if(s[i]=='A' && server!='A')
            server='A';
            else if(s[i] == 'B' && server=='B')
            bob++;
            else if(s[i]=='B' && server!='B')
            server='B';
        }
        cout << alice << " " << bob << endl;
    }
}
