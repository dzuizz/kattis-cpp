#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int g, t, n, sum = 0; cin >> g >> t >> n;
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        sum += e;
    }

    cout << ((g - t) / 10 * 9) - sum << '\n';
}