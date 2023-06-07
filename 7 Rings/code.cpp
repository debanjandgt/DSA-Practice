#include <iostream>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases)
	{
	    cases--;
	    int a,b;
	    cin >> a >> b;
	    long long ans=a*b;
	    string s1=to_string(ans);
	    if(s1[0] != '0' && s1.size() == 5)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
}
