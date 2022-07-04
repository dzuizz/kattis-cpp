#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int n, m, k; cin >> n >> m >> k;

    vector<bool> vis(k, 0);
    string a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int j = 0; j < m; j++) {
        int inc = 1;
        for (int i = 0; i < n; i++) {
            if (vis[a[i][j] - 'A']) inc = 0;
        }
        
        for (int i = 0; i < n; i++) vis[a[i][j] - 'A'] = 1;
        
        ans += inc;
    }

    cout << ans << endl;
}