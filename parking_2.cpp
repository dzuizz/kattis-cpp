#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int sm = 100, bg = 0;

        for (int i = 0; i < n; i++) {
            int e; cin >> e;
            sm = min(sm, e);
            bg = max(bg, e);
        }

        cout << 2 * (bg - sm) << '\n';
    }
}