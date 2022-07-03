#include <iostream>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main() {
    int n, ind = 1;
    while (cin >> n) {
        int mx = -INF, mn = INF;
        for (int i = 0; i < n; i++) {
            int e; cin >> e;
            mx = max(mx, e);
            mn = min(mn, e);
        }

        cout << "Case " << ind++ << ": " << mn << " " << mx << " " << mx - mn << '\n';
    }
}