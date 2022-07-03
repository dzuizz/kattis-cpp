#include <iostream>
using namespace std;
typedef long long ll;

int n;
string s;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(i%2 == 0) {
            cout << s << endl;
        }
    }
}