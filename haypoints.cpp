#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

int main() {
    int p, q; cin >> p >> q;
    map<string, int> m;

    for (int i = 0; i < p; i++) {
        string s; cin >> s;
        int e; cin >> e;
        m[s] = e;
    }
    
    for (int i = 0; i < q; i++) {
        int res = 0;
        string s;

        while (cin >> s && s != ".") res += m[s];

        cout << res << '\n';
    }
}