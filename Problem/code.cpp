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
	    if(a == b)
	    {
	        cout << "YES" << endl;
	        continue;
	    }
	    else
	    {
	        
	            int dif=abs(a-b);
	            if(dif %2 == 0 || dif % 4 == 0)
	            cout << "YES" << endl;
	            else
	            cout << "NO" << endl;
	        }
	       
	    
	}
}
