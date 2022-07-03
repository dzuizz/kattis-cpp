#include <iostream>
using namespace std;
typedef long long ll;

int n, q, a, b, c;

int main() {
    cin >> n >> q;
    int location[n+2];
    for(int i = 1; i <= n; i++) {
        cin >> location[i];
    }
    for(int i = 0; i < q; i++) {
        cin >> a >> b >> c;
        if(a == 1) {
            location[b] = c;
        } else {
            cout << abs(location[b] - location[c]) << endl;
        }
    }
}