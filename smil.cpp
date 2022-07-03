#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n-1; i++) {
        if( ( s[i] == ':' || s[i] == ';' ) && (s[i+1] == ')' || ( i < n-1 && s[i+1] == '-' && s[i+2] == ')' ) ) ) {
            cout << i << endl;
        }
    }
}