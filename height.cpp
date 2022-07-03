#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        int a[20];

        for (int i = 0; i < 20; i++) cin >> a[i];

        int ans = 0;
        for (int i = 1; i < 20; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    ans++;
                }
            }
        }
        
        cout << n << " " << ans << '\n';
    }
}