#include <iostream>
#include <string>

using namespace std;

int main() {
    int c;
    cin >> c;
    int v = 0;
    while (c) {
        string x;
        c--;
        cin >> x;
        if (x.find('+') != string::npos)
            v++;
        else
            v--;
    }
    cout << v;
}
